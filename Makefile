all : test_complexplane

test_complex: newcomplex3.o
test_complex: cplane.o

run :
	./test_complexplane

clean:
	 rm -f  test_complexplane  test_complexplane.o 
