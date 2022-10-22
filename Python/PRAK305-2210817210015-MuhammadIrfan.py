sec = int(input("Masukkan jumlah detik: "))
hari = sec // (60*60*24)
modA = sec % (60*60*24)
jam = modA // (60*60)
modB = sec % (60*60)
menit = modB // 60
detik = sec % 60
if sec>=1 and sec<60:
    print("00:00:{}" .format(detik))
elif sec>=60 and sec<3600:
    print("00:{}:{}" .format(menit, detik))
elif sec>=3600 and sec<86400:
    print("{}:{}:{}" .format(jam, menit, detik))
else:
    print("{} hari {}:{}:{}" .format(hari, jam, menit, detik))