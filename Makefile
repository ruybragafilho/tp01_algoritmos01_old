SOURCE_DIR    =  .
BIN_DIR       =  .
OBJECT_DIR    =  .
INPUT_DIR     =  .
OUTPUT_DIR    =  .


CPP = g++
CPPFLAGS = -Wall   -Werror  







Loja:  $(SOURCE_DIR)/Loja.h  $(SOURCE_DIR)/Loja.cpp
	$(CPP)   $(CPPFLAGS)   -c   $(SOURCE_DIR)/Loja.cpp   -o   $(OBJECT_DIR)/Loja.o	


Ponto2D:  $(SOURCE_DIR)/Ponto2D.h  $(SOURCE_DIR)/Ponto2D.cpp
	$(CPP)   $(CPPFLAGS)   -c   $(SOURCE_DIR)/Ponto2D.cpp   -o   $(OBJECT_DIR)/Ponto2D.o	


TesteTipoLista2:  TipoItem  $(SOURCE_DIR)/TipoLista.h  $(SOURCE_DIR)/TesteTipoLista2.cpp
	$(CPP)   $(CPPFLAGS)   -c   $(SOURCE_DIR)/TesteTipoLista2.cpp   -o   $(OBJECT_DIR)/TesteTipoLista2.o	
	$(CPP)   -o   $(BIN_DIR)/testeTipoLista2.bin   $(OBJECT_DIR)/TesteTipoLista2.o   $(OBJECT_DIR)/TipoItem.o
	$(BIN_DIR)/testeTipoLista2.bin


TesteTipoLista:  TipoItem  $(SOURCE_DIR)/TipoLista.h  $(SOURCE_DIR)/TesteTipoLista.cpp
	$(CPP)   $(CPPFLAGS)   -c   $(SOURCE_DIR)/TesteTipoLista.cpp   -o   $(OBJECT_DIR)/TesteTipoLista.o	
	$(CPP)   -o   $(BIN_DIR)/testeTipoLista.bin   $(OBJECT_DIR)/TesteTipoLista.o   $(OBJECT_DIR)/TipoItem.o
	$(BIN_DIR)/testeTipoLista.bin


TipoItem:  $(SOURCE_DIR)/TipoItem.h  $(SOURCE_DIR)/TipoItem.cpp
	$(CPP)   $(CPPFLAGS)   -c   $(SOURCE_DIR)/TipoItem.cpp   -o   $(OBJECT_DIR)/TipoItem.o	


clean:
	rm  -f  $(BIN_DIR)/*.bin
	rm  -f  $(BIN_DIR)/tp1	
	rm  -f  $(OBJECT_DIR)/*.o	
	rm  -f -r  $(SOURCE_DIR)/*~     
	clear






	



	
	

	
	
	
	
	
	
	





	

	
	
	
	
