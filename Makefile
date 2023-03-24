sample: sample.o imageio.o invert.o invert-half.o box.o frame.o scale.o pixelate.o
	g++ -o sample sample.o imageio.o invert.o invert-half.o box.o frame.o scale.o pixelate.o

sample.o: sample.cpp imageio.h

imageio.o: imageio.cpp imageio.h

invert.o: invert.cpp imageio.h

invert-half.o: invert-half.cpp imageio.h

box.o: box.cpp imageio.h

frame.o: frame.cpp imageio.h 

scale.o: scale.cpp imageio.h

pixelate.o: pixelate.cpp imageio.h

clean:
	rm -f *.o sample outImage.pgm picA.pgm picB.pgm picC.pgm picD.pgm picE.pgm picF.pgm
