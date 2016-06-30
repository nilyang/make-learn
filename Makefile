bin/test:obj/math.o obj/circle.o obj/math_test.o
	gcc -o bin/test obj/math.o obj/circle.o obj/math_test.o
obj/math.o:src/math.c
	gcc -o obj/math.o -Iinclude -c src/math.c
obj/circle.o:src/circle.c
	gcc -o obj/circle.o -Iinclude -c src/circle.c
obj/math_test.o:src/math_test.c
	gcc -o obj/math_test.o -Iinclude -c src/math_test.c

