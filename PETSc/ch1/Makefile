include ${PETSC_DIR}/lib/petsc/conf/variables
include ${PETSC_DIR}/lib/petsc/conf/rules
CFLAS += -pedantic -std=c99

e: expx.o
	-${CLINKER} -o expx expx.o ${PETSC_LIB}
	${RM} expx.o
