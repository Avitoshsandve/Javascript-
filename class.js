class hackathon
{
    constructor(topic)
    {
        this.topic=topic;
    }
    fullday()
    {
        console.log("this event"+"is a full day event of"+this.topic);
    }
}
let hackathon1=new hackathon("ÄI");
hackathon1.fullday()

let hackathon2=new hackathon("machine learning");
hackathon2.fullday()
console.log(typeof hackathon)
console.log(hackathon.prototype.fullday)