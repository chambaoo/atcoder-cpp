#!/bin/bash

CXX="g++"
CXXFLAGS="-std=gnu++23 -O2 -Wall -Wextra -Wshadow"

# コンパイル
acb() {
  $CXX $CXXFLAGS -o ./main ./main.cpp
}

# 実行
acr() {
  acb && ./main
}

# ojテスト
act() {
  acb && oj t -c ./main --ignore-spaces-and-newline
}

# サンプルファイル作成
# acnt 3 / acnt 1 4
acnt() {
  if [ "$#" -eq 1 ]; then
    s="$1"; e="$1"
  elif [ "$#" -eq 2 ]; then
    s="$1"; e="$2"
  else
    echo "Usage: acnt 3 / acnt 1 4"; return 1
  fi
  [ "$s" -gt "$e" ] && tmp=$s && s=$e && e=$tmp
  mkdir -p test
  for i in $(seq "$s" "$e"); do
    echo "create test/sample_$i.in/out"
    touch "test/sample_$i.in" "test/sample_$i.out"
  done
}
