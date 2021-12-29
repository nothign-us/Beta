all: main.cpp
	g++ main.cpp Account.cpp Address.cpp Airport.cpp Client.cpp Date.cpp Flight.cpp makeMenu.cpp Seat.cpp Ticket.cpp Time.cpp Manager.cpp -o main
clean: 
	rm main
