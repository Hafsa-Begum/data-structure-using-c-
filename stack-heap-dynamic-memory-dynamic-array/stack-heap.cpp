// there is two types memory in cpp
// 1. stack memory
// 2. heap memory

// stack memory: it's static memory. 
// it takes a fixed memory during runtime. 
// limitations:
// 1. memory limit can not be exceeded.
// 2. function removed after invoking the function, 
// so array can'nt be returned from a function.

//heap memory: it's dynamic memory
//1. memory limit can be increased during run time when it's required
//2. return function value is not removed after function invoke.

//create dynamic data
//syntax
//int *a = new int;
// new data_type is used to create a dynamic memory in heap memory
// int *a is used to store the address of dynamic memory in a stack memory
// now the value in the dynamic address can be changed using pointer dereference. such as
// *a = 10;
//this above value 10 will be store in heap memory known as dynamic memory.
