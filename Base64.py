import base64

octal_numbers = [
    '0o131', '0o155', '0o116', '0o154', '0o132', '0o155', '0o143', '0o170',
    '0o132', '0o172', '0o111', '0o147', '0o131', '0o127', '0o112', '0o152',
    '0o132', '0o127', '0o132', '0o156', '0o115', '0o127', '0o143', '0o171',
    '0o111', '0o107', '0o106', '0o153', '0o132', '0o127', '0o131', '0o147',
    '0o132', '0o127', '0o132', '0o156', '0o115', '0o127', '0o160', '0o162',
    '0o111', '0o107', '0o106', '0o153', '0o132', '0o127', '0o132', '0o156',
    '0o115', '0o127', '0o143', '0o171', '0o111', '0o107', '0o106', '0o151',
    '0o132', '0o127', '0o132', '0o156', '0o115', '0o127', '0o143', '0o171',
    '0o141', '0o171', '0o101', '0o147', '0o132', '0o104', '0o105', '0o147',
    '0o131', '0o127', '0o112', '0o152', '0o132', '0o107', '0o143', '0o171',
    '0o111', '0o107', '0o112', '0o152', '0o141', '0o151', '0o102', '0o151',
    '0o131', '0o62', '0o157', '0o147', '0o131', '0o127', '0o160', '0o163',
    '0o111', '0o101', '0o75', '0o75'
]

# Convert octal numbers to decimal integers
decimal_numbers = [int(octal, 8) for octal in octal_numbers]

# Convert decimal integers to bytes
byte_data = bytes(decimal_numbers)

# Encode bytes in base64
base64_encoded = base64.b64encode(byte_data)

# Convert bytes to a string (if needed)
base64_encoded_str = base64_encoded.decode('utf-8')

print(base64_encoded_str)