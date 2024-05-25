from keygen2 import KeyGen

keygen = KeyGen()

key = input("Enter Your Key: ")

is_valid = keygen.validate(key) # return true if key is valid else false

if is_valid:
    print("Valid Key")
else:
    print("Not Valid Key")
