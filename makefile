.SILENT:

GPP = g++ -Wall 
CLASSES = Classes
OBJS = $(CLASSES)/DataSource1D.o $(CLASSES)/Echantillon.o $(CLASSES)/EtudeStatistique1D.o
PROGRAMS = main

main:	main.cpp $(CLASSES)/DataSource1D.o $(CLASSES)/Echantillon.o $(CLASSES)/EtudeStatistique1D.o
	$(GPP) -I $(CLASSES) -o main main.cpp $(CLASSES)/DataSource1D.o $(CLASSES)/Echantillon.o $(CLASSES)/EtudeStatistique1D.o

$(CLASSES)/DataSource1D.o:		$(CLASSES)/DataSource1D.cpp 
	$(GPP) -I $(CLASSES) -o $(CLASSES)/DataSource1D.o $(CLASSES)/DataSource1D.cpp -c

$(CLASSES)/Echantillon.o:		$(CLASSES)/Echantillon.cpp 
	$(GPP) -I $(CLASSES) -o $(CLASSES)/Echantillon.o $(CLASSES)/Echantillon.cpp -c

$(CLASSES)/EtudeStatistique1D.o:	$(CLASSES)/EtudeStatistique1D.cpp 
	$(GPP) -I $(CLASSES) -o $(CLASSES)/EtudeStatistique1D.o $(CLASSES)/EtudeStatistique1D.cpp -c


clean:	
	rm -f $(OBJS) core
clobber:	clean
	rm -f $(PROGRAMS)
