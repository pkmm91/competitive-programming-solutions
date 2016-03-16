plainText = raw_input("What is your plaintext? ")
shift = int(raw_input("What is your shift? "))

def caesar(plainText, shift): 

    for ch in plainText:
        if ch.isalpha():
            stayInAlphabet = ord(ch) + shift 
            if stayInAlphabet > ord('z'):
                stayInAlphabet -= 26
            finalLetter = chr(stayInAlphabet)
        cipherText = ""
        cipherText += finalLetter

    print "Your ciphertext is: ", cipherText

    return cipherText

caesar(plainText, shift)
