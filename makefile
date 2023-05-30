EXE: producao
all: $(EXE)
$(EXE): lpsolvegen.c
	@ gcc lpsolvegen.c -o $(EXE)
	@ echo "Programa criado."

clean:
	@ rm -f $(EXE)

.PHONY: clean