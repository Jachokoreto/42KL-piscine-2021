# !/bin/sh
echo "submission?"
read nbr
echo "=== ADDING ======="
git add .
echo "=== STATUS ======="
git status
echo "=== COMMIT ======="
git commit -m "submit : $nbr"
echo "=== PUSH ======="
git push
