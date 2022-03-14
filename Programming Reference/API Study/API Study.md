<!--
To enable Preview for Markdown in Atom use the following hotkeys:
  ctrl + shift + m
-->

[Comment]: <> (May want to research how to do comments!)
[//]: <> (This also works.)
[//]: # (So does this.)

# APIs for Beginners - How to use an API (Full Course / Tutorial)
Source: https://www.youtube.com/watch?v=GZvSYJDk-us

## Unit 1
### Welcome
API - Application Programming Interface

### Defining Interface
Interface - Allows to control what is happening in something in another thing, makes things easier to use, easier to understand

If popular enough, an interface can make it into GUIs

GUI - Graphical User Interface

All interfaces allows us to interact or communicate with an object (Physical / Software)

### Video 3 - Defining API

Most Common - Web Based APIs

Programming Languages have many APIs
* Function to manipulate strings

Web Browsers use required Web APIs

Frameworks allow to extend what has been provided by an API.
* Do not nee to know how it is doing thing, but need to understand how to implement

### Break (12:40 - 12:55)
### Video 4 - Remote APIs
Allows for the searching and processing of material from a device.
* Saves storage on the device, since the command contacts another device for the information

Does all the searching and processing

A Benefit is Computational Power, allows for one to use more computer power than is provided on the local device

REST - Representational State Transfer
* Still has limitations
* APIs that follow the constraints of REST are considered RESTful

### Break (16:50 - 17:05)
### Video 5 - How the Web Works
System - Computer Connects to a Server using a Client
* Computer
  * Web Browser - Client
* Server

Actions to Connect to a Server
* Start by putting in a Location
  * URL (Universal Resource Locator)
  * URI (Universal Resource Identifier, Supersect Term)
* Browser makes a HTTP Request to the Server
  * URL has a scheming portion
    * HTTP (HyperText Transfer Protocol)
      * Protocol is like a contract
  * URI Specifies the verb
    * This request calls the GET verb, will receive data and not change data
* Server receives request that was transferred from the Client
* Server does work that is needed to do for the Client
* Generates the resulting webpage and sends back a response for the Client
  * Most important part of the response is the Body
    * For a Webpage is HTML (HyperText Markup Language)
      * HyperText - Text that can link to other text
* Browser (Client) receives a response from the Server
  * Browser (Client) renders the page
  * When a link is clicked a new HTTP GET request is sent to the server

HTTP is a Stateless Protocol
* Once a request receives a response it is done with the process
* Is client wants to keep a state, the client would need to manage that itself with each request

More HTTP verbs or Request Methods
* in forms - POST - Submitting or Posting Data to the server

Pass Information about the request
* Query Stream parameters - string after the question mark in the URL
* Headers - Key and Value pairs
  * Both requests and responses have headers, further communicate what is wanted as well as what has been sent back
  * Allow you to specify information about the content that you would expect back such as the language or the type of content
  * This technique allows for caching
    * Can embed authentication information each request using a header
  * Response also includes a header
    * Status Code, what happens on the server side
    * Content type
    * How large the data returned is

### Video 6 - RESTful API Constraint Scavenger Hunt
REST Representational State Transfer
* APIs that meet the REST Architectural Style Constraint are considered to be RESTful

Constraints for an API to be considered RESTful:
* Client-Server Architecture - With the Client Device
* Statelessness - With the Protocol used with the server
* Layered System
* Cacheability
* Uniform Design
* Code on Demand

REST APIs sit on top of Web Technology
* Client makes a call to the server
  * Protocol used is HTTP (Stateless)
  * If state is wanted use HTTP with Headers

Clients call for a resource to reference an object
* Resource is an element in a collection

CRUD - How Applications interact with Resources
* Creating
* Reading
* Updating
* Deleting

RESTful API Logic
* Program sends a get request to an API
* Server Responds with data
  * Most of the time represented using JSON (JavaScript Oriented Language)

| HTTP Verbs | CRUD |
| --- | --- |
| GET | Read |
| POST | Create |
| PUT | Update |
| PATCH | Update |
| DELETE | Delete |

### Break (27:20 - 27:35)

## Unit 2
### Video 1 - Exploring an API Online
Developer information is typically has the information for developers in the footer of a site
SDK - Software Development Kit
* API that wraps around other APIs

API Documentation - Explains what is needed to use the API
* Includes information that would be required

Some parameters are required others are optional

Response is mentioned in documentation on what to expect

Notes includes many information on how to use the API

Tokens can be used to access account information

Information returned is in JSON

URL returned can be previewed

Layered System
* Returns the same information from a caching system

### Break (44:15 - 44:30)
### Video 2 - Using an API from the Command Line
twillo
* Abstracts communication
* Makes and receives calls and text messages

SMS - Short Message Service

Uses Auth Tokens for validation

Account SID - Account String Identifier

Can send commands from the terminal

### Break (53:44 - 53:56)
### Video 3 - Using Postman to explore APIs
Made account in Postman

Made Collection with Twilio in Postman

### Break (1:03:18 - 1:03:32)
### Video 4 - Please please Mr. Postman
Make a posts using Postman

Using standard HTTP Caching Mechanisms a RESTful API should support caching

Can generate a Code Snippet with Postman

SDK - Software Development Kit
* Helper Library
* Allows for you to interact with product with your native language

### Video 5 - Using Helper Libraries (JavaScript)
Postman can generate code

Boiler Plate Code - Redundantly written code that has a few changes
* Can be avoided by using SDKs (Software Development Kits) or Helper Libraries
  * Specific to Programming Language

Install Node

Works off of a Concept of Promises

### Break (1:24:25 - 1:24:40)

### Video 6 - Using Helper Libraries (Python)
Uniform Design
* Uniform Design
  * Resource identification in requests
    * URIs included
    * Get and manipulate specific resources
  * Resource manipulation through representations
    * Clear to modify resources
  * Self-descriptive messages
  * Hypermedia as in engine of application state

CLI (Command Line Interface)

## Unit 3
### Video 1 - Introducing the Project

### Video 2 - Flask App

### Video 3 - Dealing with API Limits

### Video 4 - Javascript Single Page Application

### Video 5 - Moar JavaScript and Recap

### Video 6 - Review