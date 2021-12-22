all: main.cpp
	g++ main.cpp Address.cpp Airport.cpp Client.h Date.cpp Flight.h makeMenu.h Person.h Seat.h Ticket.cpp Time.cpp -o main
clean: 
	rm main
