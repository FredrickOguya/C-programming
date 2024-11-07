/*
There is another type of variable besides global or local variables, which is an external variable. External variables are declared in one file and used in another.

Let's take an example. In the main file, we can declare something like this:

#include <stdio.h>

char title[] = "Coddy.tech";

void show() {
   printf("This is an extern function\n");
}
Here, we declare a variable called title and a function called show.

We can use them in another file which will contain the main function like this:

#include <stdio.h>
// title variable from main.c file
extern char title[];    
// show function from main.c file
void show(void);        
 
int main(void) {
   // Print the external variable title to the console
   printf("%s \n", title);
   // Call the external function show
   show();
   return 0;
}
 

To use a variable that is defined in an external file, we use the keyword extern before the variable name. In our example, the variable is named title.

To use a function that is defined in an external file, we first declare its prototype. 

In our example, we define a function that shows a message and doesn’t return anything, so the prototype is void show(void). If, for example, we have a function that returns an int value and takes two int parameters, the prototype will be int name(int, int), and so on.

The output of this example will be:

Coddy.tech 
This is an extern function
*/