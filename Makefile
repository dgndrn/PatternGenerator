
default: pattern

pattern: pattern.c
	mkdir build
	gcc pattern.c -o build/pattern

clean:
	-rm -rf build

