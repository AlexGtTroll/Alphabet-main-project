[![CodeFactor](https://www.codefactor.io/repository/github/alexgttroll/alphabet-main-project/badge)](https://www.codefactor.io/repository/github/alexgttroll/alphabet-main-project)  

ALPHABET/АЛФАВИТ
---
*****ОПИСАНИЕ*****  
Данная программа предназначена для одной совершенно некоммерческой цели: ***`сортировка текста`***.  
Интерфейс программы состоит из консольного окна, следуя канонам семейста **Unix-подобных** ОС. 
>С чем же предусмотрена работа данной программы?  
1. `сортировка текста, набранного пользователем с клавиатуры`  
2. `сортировка текста, имеющегося в файле с расширением .txt`  
---
В нашей программе предусмотрена работа с русским текстом, так как мы самые настоящие патриоты.  
Но есть одно **НО**: кодировка .txt файла должна быть *****ANSI*****  
**ПРИЧИНА?**  
Ответ прост: иначе бы на выходе, вместо русского текста, получался бы древний эльфийский язык,
который многим, в том числе и нам, более чем полность неизвестен.  
А работа с русским текстом в UTF-8 намного сложнее, чем кажется на первый взгляд. 
Отсюда и вывод, программа работает по принципу "***as is***". Но это вовсе не означает, что со временем мы не продолжим работу в этом направлении.

Как пользоваться?
---
* Сначала появится консольное окно. Не переживайте, это нормально, это отлично. Порог пройден  
* От вас требуется ввести параметры, которые будут указаны в консоли. Да, они на английском языке. Переводчик в интернете есть, так что вряд ли у вас возникнут проблемы. Если что, то мы все равно распишем, но уже ниже.
* Ввели параметры? Отлично. Если это строка - вводите строку. Если файл - указываете полный путь к файлу.
* На выходе, если все звезды на небе сошлись, получаете желаемый результат.

Причина необходимости написания данной программы (к прочтению вовсе не обязательна, но тут вроде даже юмор есть).
---
Наслаждаясь просторами интернета и домашним заданием по СиАОДу, нам частенько нужна было помощь в сортировке текста. Сортировка, к слову, реализовывалась нами через сайты в браузере. Но вот не задача, сортировка на сайтах, как оказалось, далека от идеала. Особенно, если вводить большое количество текста, в котором, как правило, много различных символов.  
Тут-то мы и решили сделать что-то, хоть сколько-нибудь, серьезное. Так и появилась идея написать программу сортировки текста. Мы люди простые: видим цель - не видим препятствий. Выбор пал на C++, и не потому, что это единственный язык, который мы немного знаем (мы и на Паскале писать можем, и в кумире), но вообще да, C++ - это тот язык, который мы только и знаем :3  

Тотальное описание процесса работы
---
(в процессе написания)

Ресурсозатратность и ограничения
---
**Проведя совершенно независимую экспертизу, мы выяснили:**   
* на сортировку с параметрами `-A -r` 1 мегабайта текста в формате .txt, программа использует порядка 95 мегабайт ОЗУ. Времени заняло ~ 10.5 секунд.
* на сортировку `без параметров` 1 мегабайта текста в формате .txt, программа использует порядка 90 мегабайт ОЗУ. Времени заняло ~ 9.2 секунд.
* на сортировку с параметрами `-d -A -r` 1 мегабайта текста в формате .txt, программа использует порядка 44 мегабайт ОЗУ. Времени заняло ~ 8.42 секунд.
* на сортировку с параметром `-d` 1 мегабайта текста в формате .txt, программа использует порядка 40 мегабайт ОЗУ. Времени заняло ~ 7.1 секунд.
* на сортировку с параметром `-A` 1 мегабайта текста в формате .txt, программа использует порядка 94 мегабайт ОЗУ. Времени заняло ~ 10.6 секунд.
* на сортировку с параметром `-r` 1 мегабайта текста в формате .txt, программа использует порядка 93 мегабайт ОЗУ. Времени заняло ~ 9.5 секунд.
**Система, на которой проводились тесты:**  
Процессор: AMD Ryzen 7 1700 Eight-Core Processor 3.50 GHz
Оперативная память: Hynix DDR4 16Gb 2.4 GHz Single channel
Авторы
---
**Степанов Роман** и **Александр Белоногов** - главные программисты  
**Александр Белоногов** и **Степанов Роман** - всё те же главные программисты  
`Усилия были приложены равные со стороны каждого разработчика, так что мы гордимся нашим произведением.`  

Контакты
---
stepanovroma2019@gmail.com - Степанов Роман
www.syndicate@mail.ru - Александр Белоногов. www - тоже часть почты, не игнорируйте.
