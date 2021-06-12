#!/bin/bash
echo "Paste the git repo link that you want to check and press Enter"
read link

git clone $link repo_chk
echo ""

echo "==== Listing files ===="
cd repo_chk && ls -1 */*
echo ""

echo "==== Norminette check ===="
norminette -R CheckDefine | grep ex
echo ""

echo "==== Git Log ===="
git log -n 3 --graph --pretty=format:'%C(auto)%h (%cr) : %s' | cat
echo ""

cd .. && rm -rf repo_chk
echo ""

echo "\"repo_chk\" directory removed"
echo ""


