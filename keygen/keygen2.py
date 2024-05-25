import random
import string


def generate_license_key(length=16):
    # Define characters that can be used in the license key
    characters = string.ascii_letters + string.digits

    # Generate a random license key of the specified length
    license_key = ''.join(random.choice(characters) for _ in range(length))

    return license_key.upper()


if __name__ == "__main__":
    key_length = 5  # You can change the desired length of the license key
    num_keys = 5  # You can change the number of keys to generate

    for _ in range(num_keys):
        license_key = generate_license_key(key_length)
        print(license_key + " ")
