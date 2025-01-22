prezyvka = input("Vložte prezývku: ")
while prezyvka:
  if prezyvka.isalnum():
    if len(prezyvka) >= 5 and len(prezyvka) <= 15:
      if prezyvka[0].isalpha():
        print(f"Ďakujeme za registráciu {prezyvka}!")
        break
      else:
        print("Prvý znak musí byť písmeno!")
    else:
      print("Dĺžka prezývky musí mať 5-15 znakov!")
  else:
    print("Prezývka môže obsahovať len čísla a písmená!")
  prezyvka = input("Vložte prezývku (alebo stlačte enter pre vypnutie): ")