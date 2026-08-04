test .osdi
.osdi resistor

V1 input 0 DC 0
N1 input 0 my_resistor r=2k

.dc V1 0 5 0.1

.control
run
plot i(V1)
.endc
.end
