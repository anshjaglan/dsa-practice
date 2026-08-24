/*console.log("Hello World");
//This is single line comment symbol
console.log("Now this is multi line comment");
/* Hello Everyone this is a 
multiple line
comment section */
// Arithmetic Operator
/*let a = 5;
let b = 2;
console.log("a=",a);
console.log("b=",b);
console.log("a+b=",a+b);
  console.log("a-b=",a-b);
   console.log("a*b=",a*b);
    console.log("a/b=",a/b);
     console.log("a%b=",a%b);
      console.log("a**b=",a**b); 

      // unary operator
     a--;
      console.log(" a =",a);
      a++;
       console.log(" a =",a);
       //assignmnet operator
       a+=4;
       console.log(" a =",a);
       a-=5;
       console.log(" a =",a);
       a*=5;
       console.log(" a =",a);
       a/=4;
       console.log(" a =",a);
       a%=4;
       console.log(" a =",a);

       //comparison operator
        console.log(" a ==  b",a==b);
        console.log(" a !=  b",a!=b);
        console.log(" a >=  b",a>=b);
        console.log(" a <=  b",a<=b);
        console.log(" a ===  b",a===b); //strict version also notice on string and no.

        //logical operator

        //logical AND

        let cndt1 = a < b;
        let cndt2 = a == 1;
        console.log("cndt1 && cndt2 = ", cndt1 && cndt2 );
        console.log("cndt1 && cndt2 = ", b < a || b ==2);
         console.log("(cndt1 ! cndt2) = ", !(6 < 5) ); // logical not(!) always give opposite answer of question
         
         // conditional statements
          let age = 11;

          if ( age > 18) {
            console.log("you can vote");
          }

          if (age  < 18) {
            console.log("You  cannot vote");
          }

          let mode = "light"
          let color;

          if (mode == "dark"){
            color = " black";
          }

          if( mode = "light"){
            color = " white";
          }
          console.log("color = ", color);

          //if else statement

          let age1 = 18;
          if(age1>=18) {
            console.log("vote")

          }
          else{
            console.log("not vote")
          }
          // find even or odd
          
          let num = 11;

          if(num%2 === 0){
            console.log(num," is even");
          }
          else{
            console.log(num,'is odd');
          }

          // syntax -> rules

          //else-if statements

          let age2 = 98;

          if (age2<18){
           age2 = "junior";
          
          }
          else if (age2>18,age2<60){
           age2 =" middle";
          }
          else{
            age2 = "senior";
          }
          console.log(age2)

          //ternary operator
          
          let age3 = 15;

          let result = age3>=18 ? "adult": "Not adult";
          console.log(result);

         /* //practice question 1

          let number = prompt("enter a number:");

        if (number % 5 === 0 ){
          console.log(number,"is a multiple of 5");
        }
        else {
          console.log(number,"is NOT a multiple of 5");
        }
          */

        // practice question 2

        /*let marks = prompt("Enter your marks(1-100)");
        let grades;

        if(marks>=80){
          grades = "A";
          }
          else if(marks>=70 && marks<=79){
            grades = "B";
          }
          else if(marks>=60 && marks<=69){
            grades = "C";
          
          
          }
          else if(marks>=50 && marks<=59)
          {
            grades = "D";
          }
          else
          {
            "F";
          }
          console.log(grades) */
          //for(let count=1; count<=5; count++){
            //console.log("apna college");
          //}
         /*let fullname =  prompt("Enter your fullname without spaces");
         let username = "@" + fullname + fullname.length;
         console.log(username);*/
         let marks = [10,39,38,98,40];
         console.log(marks);
         console.log(marks.length);