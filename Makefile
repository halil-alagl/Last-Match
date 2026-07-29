all:
	g++ Game.cpp Player.cpp Box.cpp -o Game -lsfml-graphics -lsfml-window -lsfml-system 
	./Game