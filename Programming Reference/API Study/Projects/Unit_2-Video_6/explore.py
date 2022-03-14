import os
from twilio.rest import Client

account_sid = os.environ['TWILIO_ACCOUNT_SID']
auth_token = os.environ['TWILIO_AUTH_TOKEN']

client = Client(
    account_sid,
    auth_token
)

#for msg in client.messages.list():
#    print(f"Deleting {msg.body}")
#    msg.delete()

msg = client.messages.create(
    to="+16618002221",
    from_="+12695254066",
    body="Hello from Python",
)

print(f"Created a new message: {msg.sid}")