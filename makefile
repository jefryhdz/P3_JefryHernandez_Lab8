main:    main.cpp Minion.o Melee.o Flying.o Range.o Goomba.o Chain.o Boo.o Paratroopa.o Hammer.o Magikoopa.o Equipo.o
	g++ main.cpp Minion.o Melee.o Flying.o Range.o Goomba.o Chain.o Boo.o Paratroopa.o Hammer.o Magikoopa.o  Equipo.o -o main
main.o:	main.cpp Minion.h Melee.h Flying.h Range.h Goomba.h Chain.h Boo.h Paratroopa.h Hammer.h Magikoopa.h Equipo.h
	g++ -c main.cpp
Minion:	Minion.cpp Minion.h
	g++ -c Minion.cppMelee:	Melee.cpp Melee.h
	g++ -c Melee.cppFlying:	Flying.cpp Flying.h
	g++ -c Flying.cppRange:	Range.cpp Range.h
	g++ -c Range.cppGoomba:	Goomba.cpp Goomba.h
	g++ -c Goomba.cppChain:	Chain.cpp Chain.h
	g++ -c Chain.cppBoo:	Boo.cpp Boo.h
	g++ -c Boo.cppParatroopa:	Paratroopa.cpp Paratroopa.h
	g++ -c Paratroopa.cppHammer:	Hammer.cpp Hammer.h
	g++ -c Hammer.cppMagikoopa:	Magikoopa.cpp Magikoopa.h
	g++ -c Magikoopa.cpp
	g++ -c Equipo.cpp

clean:
	rm  *.o main
