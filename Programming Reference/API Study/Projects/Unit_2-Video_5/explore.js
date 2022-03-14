require("dotenv").config(); // Loads Environment Variables

// Unit 2: Video 5: Using Helper Libraries (JavaScript)
// This is a Comment
/* This is a C-Type Comment*/

const Twilio = require("twilio");   // Access Client

const accountSid = process.env.TWILIO_ACCOUNT_SID;
const authToken = process.env.TWILIO_AUTH_TOKEN;

//const client = require('twilio')(accountSid, authToken);

const client = new Twilio(  // Setup a New Client (Account SID, Auth Token)
    accountSid,
    authToken 
);


client.messages
    .list() //  Makes a get request
    .then(messages =>
        console.log(`The most recent message is ${messages[0].body}`)    // messages is an array
    ).catch(err => console.error(err));

console.log('Gathering your message log');
