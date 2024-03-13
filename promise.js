function placement()
{
    return new Promise((resolve,reject)=>{
    setTimeout(() => {
    console.log("I")
    resolve();

},2000);
})
}
function interview()
{
    return new Promise((Resolve,reject)=>{
    setTimeout(() => {
    console.log("am")
    resolve();
},2000);
})
}
function problemsolving()
{

    console.log("winning")
}
function placed()
{
    console.log("someday")
}
placement().then(interview).then(problemsolving).then(placed).then(placed)