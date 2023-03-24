OBJECTS =  invert.o invert-half.o box.o frame.o scale.o pixelate.o

main: main.o imageio.o $(OBJECTS)
	g++ -o main main.o imageio.o $(OBJECTS)

main.o: main.cpp imageio.h

sample: sample.o imageio.o 
	g++ -o sample sample.o imageio.o

sample.o: sample.cpp imageio.h

imageio.o: imageio.cpp imageio.h

invert.o: invert.cpp imageio.h

invert-half.o: invert-half.cpp imageio.h

box.o: box.cpp imageio.h

frame.o: frame.cpp imageio.h 

scale.o: scale.cpp imageio.h

pixelate.o: pixelate.cpp imageio.h

clean:
	rm -f *.o main sample outImage.pgm picA.pgm picB.pgm picC.pgm picD.pgm picE.pgm picF.pgm
