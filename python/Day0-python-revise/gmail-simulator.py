import datetime
import sys

class Email:
    def __init__(self, sender, receiver, subject, body):
        self.sender = sender
        self.receiver = receiver
        self.subject = subject
        self.body = body
        self.timestamp = datetime.datetime.now()
        self.read = False

    def mark_as_read(self):
        self.read = True

    def display_full_email(self):
        self.mark_as_read()
        print('\n--- Email ---')
        print(f'From: {self.sender.name}')
        print(f'To: {self.receiver.name}')
        print(f'Subject: {self.subject}')
        print(f"Received: {self.timestamp.strftime('%Y-%m-%d %H:%M')}")
        print(f'Body: {self.body}')
        print('------------\n')

    def __str__(self):
        status = 'Read' if self.read else 'Unread'
        return f"[{status}] From: {self.sender.name} | Subject: {self.subject} | Time: {self.timestamp.strftime('%Y-%m-%d %H:%M')}"
class Inbox:
    def __init__(self):
        self.emails = []

    def receive_email(self, email):
        self.emails.append(email)

    def list_emails(self):
        if not self.emails:
            print('Your inbox is empty.\n')
            return
        print('\nYour Emails:')
        for i, email in enumerate(self.emails, start=1):
            print(f'{i}. {email}')


    def read_email(self, index):
        if not self.emails:
            print('Inbox is empty.\n')
            return
        actual_index = index - 1
        if actual_index < 0 or actual_index >= len(self.emails):
            print('Invalid email number.\n')
            return
        self.emails[actual_index].display_full_email()

    def delete_email(self, index):
        if not self.emails:
            print('Inbox is empty.\n')
            return
        actual_index = index - 1
        if actual_index < 0 or actual_index >= len(self.emails):
            print('Invalid email number.\n')
            return
        del self.emails[actual_index]
        print('Email deleted.\n')
        
class User:
    def __init__(self, name):
        self.name = name
        self.inbox = Inbox()

    def send_email(self, receiver, subject, body):
        email = Email(sender=self, receiver=receiver, subject=subject, body=body)
        receiver.inbox.receive_email(email)
        print(f'Email sent from {self.name} to {receiver.name}!\n')

    def check_inbox(self):
        print(f"\n{self.name}'s Inbox:")
        self.inbox.list_emails()

    def read_email(self, index):
        self.inbox.read_email(index)

    def delete_email(self, index):
        self.inbox.delete_email(index)

total_users = []
current_user = ""
def main():
    u1 = User(input("Enter first user's name: ").strip(" "))
    u2 = User(input("Enter second user's name: ").strip(" "))
    current_user = u1
    total_users.append(u1)
    total_users.append(u2)
    menu(current_user, u2)

def menu(current_user,receiver):
    try:
        choice = int(input(f'\n\nLogged in as {current_user.name}\nEnter your choice:\n1. Send Email\n2. Check Inbox\n3. Read Email\n4. Delete Email\n5. Switch User\n6. Exit\n').strip(" "))
        match choice:
            case 1: send(current_user, receiver)
            case 2: current_user.check_inbox()
            case 3: current_user.read_email(int(input("\nEnter email index: ").strip(" ")))
            case 4: current_user.delete_email(int(input("\nEnter email index: ").strip(" ")))
            case 5: 
                temp = current_user
                current_user = receiver
                receiver = temp
                menu(current_user, receiver)
            case 6: sys.exit("\n\nUser Ragequit.")
            case _: raise ValueError
            
        menu(current_user, receiver)
    except ValueError:
        print("ERROR! Please enter valid choice!")
        menu(current_user, receiver)
        
    
def send(current_user, receiver):
    try:
        
        # receiver = input("Who do you want to send an Email to? ").strip(" ")
        # if receiver not in total_users: 
        #     raise ValueError
        # else: receiver = total_users[1]
        
        subject = input("Enter Subject:\n").strip(" ")
        body = input("Enter Body of the message:\n").strip(" ")
        
        current_user.send_email(receiver, subject, body)
        menu(current_user, receiver)
        
    except ValueError:
        print("\nEnter correct input!")
        menu(current_user, receiver)

if __name__ == '__main__':
    main()
