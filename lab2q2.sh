echo "Part 1";
grep -E --color "\bt" demo.txt;
grep -E --color "t\b" demo.txt;
echo "Part 2";
grep -o --color "kernel" demo.txt | wc -l;
echo "Part 3";
sum=0;
addnum1=$(grep -o -a -m 1 -h -r "[0-9]" demo.txt | head -1);
addnum2=$(grep -o "[0-9][0-9]" demo.txt);
sum=`expr $addnum1 + $addnum2`;
echo $sum;

