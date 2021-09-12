
people = {
    "Brain": "+1-111-111-1000",
    "David": "+2-222-222-2000"
}

name = input("Name: ")

if name in people:
    number = people[name]
    print(f"Number: {number}")
