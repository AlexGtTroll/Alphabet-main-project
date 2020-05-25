[![CodeFactor](https://www.codefactor.io/repository/github/alexgttroll/alphabet-main-project/badge)](https://www.codefactor.io/repository/github/alexgttroll/alphabet-main-project) [![Build Status](https://travis-ci.org/AlexGtTroll/Alphabet-main-project.svg?branch=master)](https://travis-ci.org/AlexGtTroll/Alphabet-main-project)

---
 ### Курсовой проект по предмету "Технологии разработки программного обеспечения" 
---
 Тема проекта: "Алфавит" (Alphabet).  
 Проект выполнили студенты СибГУТИ факультета ИВТ гр. ИП-912  
 **Белоногов Александр** и **Степанов Роман**


ALPHABET/АЛФАВИТ
---
*****СБОРКА ПОСЛЕДНЕЙ ВЕРСИИ ПРОЕКТА*****
```
git clone https://github.com/AlexGtTroll/Alphabet-main-project
cd Alphabet-main-project
make -f makefile
```
*****ЗАПУСК*****
```
./bin/Alphabet-main-project
```
*****ЗАПУСК ТЕСТОВ*****
```
./bin/test
```
*****ОПИСАНИЕ*****  
Данная программа предназначена для одной совершенно некоммерческой цели: ***`сортировка текста`***.  
Интерфейс программы состоит из консольного окна, следуя канонам семейста **Unix-подобных** ОС. 
>С чем же предусмотрена работа данной программы?  
1. `сортировка текста, набранного пользователем с клавиатуры`  
2. `сортировка текста, имеющегося в файле с расширением .txt`  
---
****  
В нашей программе предусмотрена работа с русским текстом, так как мы самые настоящие патриоты.  
Но есть одно **НО**: кодировка .txt файла должна быть *****UTF-8*****  
**ПРИЧИНА?**  
Ответ прост: иначе бы на выходе, вместо русского текста, получался бы древний эльфийский язык,
который многим, в том числе и нам, более чем полность неизвестен.  
**ПРИМЕЧАНИЕ**: Параметр -А не работает с русскими словами в кодировке *****UTF-8*****  
Однако эта проблема коснулась только ОС Linux. На Windows мы решили эту проблему сменой кодировки на *****ANSI*****.  
Отсюда и вывод, программа работает по принципу "***as is***". Но это вовсе не означает, что со временем мы не продолжим работу в этом направлении.

Как пользоваться?
---
* Вводим команду в терминал, что находится в пункте **ЗАПУСК**
* Выводится текст на английском языке, показывающий, как работать с программой.
* От вас требуется ввести параметры, которые будут указаны в терминале. Да, они на английском языке. Переводчик в интернете есть, так что вряд ли у вас возникнут проблемы. Если что, то мы все равно распишем, но уже ниже.
* Ввели параметры? Отлично. Если это строка - вводите строку. Если файл, то он должен лежать в склонированном репозитории. От Вас требуется написать название файла.
* На выходе, если все звезды на небе сошлись, получаете желаемый результат.

Причина необходимости написания данной программы (к прочтению вовсе не обязательна, но тут вроде даже юмор есть).
---
Наслаждаясь просторами интернета и домашним заданием по СиАОДу, нам частенько нужна было помощь в сортировке текста. Сортировка, к слову, реализовывалась нами через сайты в браузере. Но вот не задача, сортировка на сайтах, как оказалось, далека от идеала. Особенно, если вводить большое количество текста, в котором, как правило, много различных символов.  
Тут-то мы и решили сделать что-то, хоть сколько-нибудь, серьезное. Так и появилась идея написать программу сортировки текста. Мы люди простые: видим цель - не видим препятствий. Выбор пал на C++, и не потому, что это единственный язык, который мы немного знаем (мы и на Паскале писать можем, и в кумире), но вообще да, C++ - это тот язык, который мы только и знаем :3  

Тотальное описание процесса работы
---
1. Запускаем терминал в репозитории, прописываем необходимую команду.  
2. Вводим **параметры**  
В первую очередь, нужно определиться с тем, что вы будете сортировать: `строку` или `файл` .txt (для этого напишите `string`, если строка, или `file`, если файл).    
Следующие параметры:  
`-r` - обратный порядок сортировки.  
`-d` - дубликаты не учитываются (ускоряет процесс работы программы).  
`-A` - заглавные буквы сменяются на строчные, тем самым при сортировке не учитывается регистр.    
Никто не обязывает вас указывать три вышеперечисленных параметра. Без этих параметров программа произведет обычную сортировку.  
**Подробнее про `-A`:** Если сортируете файл .txt, тогда необходимо изменить кодировку текстового файла (по стандарту стоит `UTF-8` - необходимо выставить `ANSI`). Чтобы это сделать, нужно: открыть текстовый файл. Нажать на ***"Файл"*** в левом верхнем углу и далее нажать на ***"Сохранить как..."***. Рядом с кнопкой ***"Сохранить"*** будет кодировка. Меняете её на `ANSI`, и сохраняете. В противном случае, у вас вместо русского алфавита будут символы.  
4. Ввели **параметры?** Отлично, нажимаете `ENTER`. Если эта была строка (string параметр), тогда вводите строку с клавиатуры. Если же это был параметр `file`, тогда указываете название файла, учитывая при вводе формат.   
**Пример:** name.txt   
5. Ввели данные - нажимаете `ENTER`. Была строка - на выходе получаете результат сортировки строки с указанными параметрами.  
Указали ***название*** файла? В консоли будет произведет вывод этого названия, дабы убедиться, что программа правильно записала его. Своего рода проверка на правильность никому не помешает.  
Подождите какое-то время, пока программа сделает своё дело, и откроется новый .txt файл **SortFile.txt**, который и будет содержать информацию из исходного файла, но уже отсортированную.  
*****(Дополнительно)*****  
6. Если хотите отсортировать что-нибудь ещё, то закрываете `SortFile.txt`, и вводите новые параметры. Так до тех пор, пока вы самолично не закроете консольное окно.   

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
`Чисто теоретически, единственное ограничение - вычислительная мощь вашего компьютера`  
Разумеется, в данных тестах есть погрешность, так как в среде разработки Visual Studio C++ есть свои особенности компиляции, которые влияют на производительность. В общем, даже результаты, полученные выше, не отражают действительной ситуации. Трудоемкость, к слову, логарифмическая.  

**Авторы**
---
**Степанов Роман** и **Александр Белоногов** - главные программисты  
**Александр Белоногов** и **Степанов Роман** - всё те же главные программисты  
`Усилия были приложены равные со стороны каждого разработчика, так что мы гордимся нашим произведением.`  

Контакты
---
stepanovroma2019@gmail.com - Степанов Роман  
www.syndicate@mail.ru - Александр Белоногов. www - тоже часть почты, не игнорируйте.
