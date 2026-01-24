# AtCoder C++ (C++23 / GCC 15) Environment

このディレクトリは、WSL2 上で AtCoder の C++23 (GCC 15.x) 環境をコンテナで再現するための設定です。

## セットアップ手順（現行: C++23 / GCC 15）

1. Windows 側に Docker Desktop をインストールし、WSL2 統合で Ubuntu を有効化してください。
2. WSL (Ubuntu) 上でこのリポジトリを開き、次のコマンドでイメージをビルドします:

   ```bash
   cd docker
   docker build -f Dockerfile.gcc15 -t atcoder:gcc15 .
   ```

3. VSCode で WSL 上のこのフォルダを開きます (Remote - WSL 拡張)。
4. 問題ごとにディレクトリを作り、その中に `main.cpp` を置きます。
5. VSCode の「タスクの実行」から:
   - `build (gcc15, C++23)` でコンパイル（コンテナ内で `g++` 実行）
   - `run (gcc15)` で実行（コンテナ内で `./main` 実行）
   - `oj test (host, gcc15 bin)` で Online Judge Tools によるテスト  
     （ホストの `oj` が「コンテナ内で `./main` を実行するコマンド」を呼び出す）

`docker/Dockerfile.gcc15` 内を編集することで、追加のツールやライブラリをコンテナに入れることができます。

> 補足: `oj` はコンテナではなく WSL ホスト側にインストールして使います。  
> 例: `python3 -m pip install --user online-judge-tools`

## ディレクトリ構成の例（コンテスト種別 / ID ベース）

問題はコンテスト種別（abc, arc など）とコンテスト ID ごとにまとめると管理しやすくなります。

```text
atcoder/
  lib/                     # 共通ライブラリ（任意）
  abc/                     # コンテスト種別
    123/                   # コンテストID
      a/
        main.cpp
        test/              # 入出力ファイル置き場
          sample_1.in
          sample_1.out
          my_1.in
          my_1.out
      b/
        main.cpp
        test/
          sample_1.in
          sample_1.out
```

- 共通コードは `lib/` 以下にヘッダとしてまとめ、必要に応じて相対パスで `#include` します。
- `test/` ディレクトリには、`*.in` とそれに対応する `*.out` を置く運用にしておくと、`oj t` などのツールとも相性が良いです。

## 各問題ディレクトリでの Makefile 利用

このリポジトリには、問題ディレクトリ用の Makefile テンプレート `Makefile.template` を用意しています。

1. 問題ディレクトリ（例: `abc/123/a`）で:

   ```bash
   cp ../../../Makefile.template Makefile
   ```

2. そのディレクトリ内での使い方:

   ```bash
   make               # ビルド（コンテナ内の g++ を使用）
   make run           # コンテナ内で ./main を実行
   make test          # oj t で test/*.in / *.out を使ってテスト
   make newtest 3     # test/sample_3.in, test/sample_3.out を作成
   make newtest 1 4   # sample_1〜sample_4 の in/out を作成
   make clean         # main を削除
   ```

## 将来ほかの GCC バージョンを使いたくなったら

1. `docker/Dockerfile.gcc15` をコピーして、例として `docker/Dockerfile.gccXX` を作成します。
2. 新しいファイルの先頭行を、使いたいバージョンに応じて変更します:

   ```dockerfile
   FROM gcc:16  # 例: GCC 16 を使いたい場合
   ```

3. WSL 上で次を実行して、新しいイメージをビルドします:

   ```bash
   cd docker
   docker build -f Dockerfile.gccXX -t atcoder:gccXX .
   ```

4. `.vscode/tasks.json` の `gcc15` 向けタスクをコピーし、`atcoder:gccXX` に書き換えたタスクを追加します。(vscodeのtaskの起動は遅い場合はmakeコマンドの使用を推奨)

これで、VSCode のタスク選択で GCC のバージョンを切り替えられるようになります。
