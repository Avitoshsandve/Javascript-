var obj1 =
{
    fname:"Pranay",
    age:20,
    gender:"trans",

}
//var obj2 =
//{
    //name:"Avito",
   // age:20,
    //gender:"male",
//}
//obj2.__proto__ = obj1;
obj2=Object.create(obj1)
obj2.lname="smith";

console.log(obj2);