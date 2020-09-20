g++ main.cpp
read n
for((i=1;i<=n;++i))
do
	echo $i
	./a.out < $i.in > $i.out
	diff -w $i.out $i.ans || break
done
rm a.out
