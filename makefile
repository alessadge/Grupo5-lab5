Main: Main.o Usuario.o Cliente.o  Personal.o Administrador.o Chef.o Lavaplatos.o Meseros.o 
	g++ Main.o Usuario.o Cliente.o  Personal.o Administrador.o Chef.o Lavaplatos.o Meseros.o -o Main

Main.o: Main.cpp Usuario.h Cliente.h  Personal.h Administrador.h Chef.h Lavaplatos.h Meseros.h 
	g++ -c Main.cpp
 
Usuario.o: Usuario.cpp Usuario.h 
	g++ -c Usuario.cpp 
 
Cliente.o:  Cliente.h Cliente.cpp Usuario.h 
	g++ -c Cliente.cpp 
 
Personal.o:  Personal.h Personal.cpp Usuario.h 
	g++ -c Personal.cpp 
 
Administrador.o:  Administrador.h Administrador.cpp Personal.h Usuario.h 
	g++ -c Administrador.cpp 
 
Chef.o:  Chef.h Chef.cpp Personal.h Usuario.h
	g++ -c Chef.cpp 
 
Lavaplatos.o:  Lavaplatos.h Lavaplatos.cpp Personal.h Usuario.h
	g++ -c Lavaplatos.cpp 
 
Meseros.o:  Meseros.h Meseros.cpp Personal.h Usuario.h
	g++ -c Meseros.cpp 
 
clean: 
	rm -f *.0 *.main
