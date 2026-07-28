all:
	g++ Game.cpp Player.cpp -o Game -lsfml-graphics -lsfml-window -lsfml-system 
	./Game