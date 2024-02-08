PROG = cgpapp
cc = gcc
CFlags = `pkg-config --cflags gtk+-3.0`
LINS = `pkg-config --libs gtk+-3.0`

${PROG}: ${PROG}.c
	${cc} ${CFlags} -o ${PROG} ${PROG}.c ${LINS}
clean:
	rm ${PROG}
