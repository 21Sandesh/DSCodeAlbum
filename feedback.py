import smtplib

s = smtplib.SMTP('smtp.gmail.com', 587)

s.starttls()

s.login("vitedu133@gmail.com", "ptzxppsytepmwzlo")

file1 = open("feedback.txt", "r+")

msg = file1.read()

message = msg

s.sendmail("vitedu133@gmail.com", "onkarsangale31@gmail.com", message)
print("sent...")

s.quit()
