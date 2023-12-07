class Time:
    def __init__(self, hours, minutes, seconds):
        self.__hours = hours
        self.__minutes = minutes
        self.__seconds = seconds

    def __add__(self, other):
        hours = self.__hours + other.__hours
        minutes = self.__minutes + other.__minutes
        seconds = self.__seconds + other.__seconds
        if seconds >= 60:
            minutes += 1
            seconds = (seconds%60)
        if minutes >= 60:
            hours += 1
            minutes = (minutes%60)
        if hours >= 24:
            hours = (hours%24)
        return f"{hours}:{minutes}:{seconds}"

print("Enter the hours, minutes and seconds for the first time:")
hours1 = int(input("Hours: "))
minutes1 = int(input("Minutes: "))
seconds1 = int(input("Seconds: "))
print("Enter the hours, minutes and seconds for the second time:")
hours2 = int(input("Hours: "))
minutes2 = int(input("Minutes: "))
seconds2 = int(input("Seconds: "))
time1 = Time(hours1, minutes1, seconds1)
time2 = Time(hours2, minutes2, seconds2)
print("The sum of the times is", time1 + time2, "hours")