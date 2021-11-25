# nuvarande katalog
# Unix kan troligen köra $(realpath .) och få hela sökvägen
# På windows... om du har mellanslag någonstans i sökvägen krånglar det
# Ha kvar detta i så fall.
CUR_DIR :=.

# Ändra denna där du har dina includes
# Det gör att du slipper ange hela sökvägen i dina .cpp filer
INC_DIR :=$(CUR_DIR)/inc/
INC_DIR +=$(CUR_DIR)/inc/daggdjur/

# Om du har clang så ändra till clang+ 
CC :=g++

# Lägger till -I innan katalogerna.
IFLAGS :=$(addprefix -I, $(INC_DIR))

# Börja med där main()-funktionen finns, min är i main.cpp
# Inga mellanslag på slutet.
MINA_FILER :=\
	./src/main.cpp \
	./src/base/daggdjur.cpp \
	./src/daggdjur/katt.cpp \
	./src/daggdjur/hund.cpp

# Om du vill lägga till LD flaggor läs mer på: 
# https://caiorss.github.io/C-Cpp-Notes/compiler-flags-options.html
LDFLAGS :=

# Skapar objekten (KOMPILERER ENDAST)
# Fördelen är att den bara kompilerar ändrade filer.
#$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
#	$(CC) $(CFLAGS) -o $@ -c $<

# Main.exe (ändra om du har mac eller nåt annat)
# outputen blir $@ = main.exe
# Om du ändrar till 'main:' blir då outputen $@ = main
# osv.
main.exe: $(MINA_FILER)
	$(CC) $(IFLAGS) $(LDFLAGS) $(MINA_FILER) -o $@

# Rensar alla .o filer
# om något går på tok fel
clean:
#	rm $(OBJ_DIR)/*.o
	rm main.exe