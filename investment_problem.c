/* INVESTMENT PROBLEM */
 #define PERIOD 10
 #define PRINCIPAL 5000.00
 
int  main()
 { 
 int year;
float amount, value, inrate;
 
 amount = PRINCIPAL;
 inrate = 0.11;
 year = 0;
 
 while(year <= PERIOD)
 { printf(ā%2d %8.2f\nā,year, amount);
 value = amount + inrate * amount;
 year = year + 1;
 amount = value;
 }
