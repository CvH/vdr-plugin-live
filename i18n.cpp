/* These are translations of strings used in live.  If you provide us
   with translations for one of the missing languages or stings,
   please keep the following line in your file and submit your extended
   version of i18n.cpp. (If you would like to submit a patch read below)

   $Id: i18n.cpp,v 1.92 2007/06/17 22:04:58 tadi Exp $

   Note to developers:
   How to safely integrate translations from third parties:
     - move your current verion to a safe name. i.E. i18n.cpp.current
	    >$ mv i18n.cpp i18n.cpp.current
	 - checkout the revision of the submitted translations (see header line)
        >$ cvs update -r<revision> i18n.cpp
     - create a patch with more than normal context (because of the
       quite reqular structure of this file). 20 lines of context are safe.
	    >$ diff -Nur -U 20 i18n.cpp i18n.cpp.translated > i18n.diff
     - IMPORTANT: reset your verion of the file: (clears the sticky tag created
       on checkout above)
        >$ cvs update -A i18n.cpp
     - restore your current version:
	    >$ mv i18n.cpp.current i18n.cpp
	 - apply the patch to your current version
	    >$ patch -p1 < i18n.diff
     - double check that no newer strings and/or translations got lost.
	 - commit the new version.
 */

#include "i18n.h"

namespace vdrlive {

const tI18nPhrase Phrases[] = {
    { "Live Interactive VDR Environment",
      "Live Interactive VDR Environment",
      "", // Slovenski
      "", // Italiono
      "", // Nederlands
      "", // Portugu�s
      "Live Interactive VDR Environment", // Fran�ais
      "", // Norsk
      "Live-integroitu VDR-ymp�rist�",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "What's running at",
      "Was l�uft um",
      "", // Slovenski
      "", // Italiono
      "", // Nederlands
      "", // Portugu�s
      "Programmes diffus�s �", // Fran�ais
      "", // Norsk
      "Menossa kello",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "%I:%M %p", // Time formatting string (Hour:Minute suffix)
      "%H:%M Uhr", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "%H:%M", // Fran�ais
      "", // Norsk
      "%H:%M",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "%I:%M:%S %p", // Time formatting string (Hour:Minute:Seconds suffix)
      "%H:%M:%S Uhr", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "%H:%M:%S", // Fran�ais
      "", // Norsk
      "%H:%M:%S",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "%a, %b %d", // English
      "%a, %d.%m.", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "%a %d %b", // Fran�ais
      "", // Norsk
      "%a, %d.%m.",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "%A, %b %d %Y", // English
      "%A, %d.%m.%Y", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "%A %d %B %Y", // Fran�ais
      "", // Norsk
      "%A, %d.%m.%Y",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "%b %d %y", // English
      "%d.%m.%y", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "%d.%m.%y", // Fran�ais
      "", // Norsk
      "%d.%m.%y",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "%A, %x", // English
      "%A, %x", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "%A %x", // Fran�ais
      "", // Norsk
      "%A, %x",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Date", // English
      "Datum", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Date", // Fran�ais
      "", // Norsk
      "P�iv�m��r�",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Time", // English
      "Zeit", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Temps", // Fran�ais
      "", // Norsk
      "Kellonaika",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Recordings", // English
      "Aufnahmen", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Enregistrements", // Fran�ais
      "", // Norsk
      "Tallenteet",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "List of recordings", // English
      "Liste der Aufnahmen", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Liste des enregistrements", // Fran�ais
      "", // Norsk
      "Tallennelistaus",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "No recordings found", // English
      "Keine Aufnahmen vorhanden", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Aucun enregistrement trouv�", // Fran�ais
      "", // Norsk
      "Tallenteita ei l�ydy",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "playing recording", // English
      "Wiedergabe", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Lire", // Fran�ais
      "", // Norsk
      "Toistetaan tallennetta",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "stop playback", // English
      "Anhalten", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Arr�ter", // Fran�ais
      "", // Norsk
      "Lopeta toisto",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "resume playback", // English
      "Fortsetzen", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Reprendre", // Fran�ais
      "", // Norsk
      "Jatka toistoa",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "pause playback", // English
      "Pause", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Pause", // Fran�ais
      "", // Norsk
      "Pys�yt� toisto",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "fast forward", // English
      "Suchlauf vorw�rts", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Avance rapide", // Fran�ais
      "", // Norsk
      "Pikakelaus eteenp�in",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "fast rewind", // English
      "Suchlauf r�ckw�rts", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Retour rapide", // Fran�ais
      "", // Norsk
      "Pikakelaus taaksep�in",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Remote Control", // English
      "Fernbedienung", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Contr�ler", // Fran�ais
      "", // Norsk
      "Kauko-ohjain",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Interval", // English
      "Intervall", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Intervalle", // Fran�ais
      "", // Norsk
      "P�ivitysv�li",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Save", // English
      "Speichern", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Sauvegarder", // Fran�ais
      "", // Norsk
      "Tallenna",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Menu", // English
      "Men�", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Menu", // Fran�ais
      "", // Norsk
      "Valikko",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Exit", // English
      "Zur�ck", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Exit", // Fran�ais
      "", // Norsk
      "Poistu",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Back", // English
      "Zur�ck", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Retour", // Fran�ais
      "", // Norsk
      "Takaisin",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Ok", // English
      "Ok", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Ok", // Fran�ais
      "", // Norsk
      "Ok",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Vol+", // English
      "Laut+", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Vol+", // Fran�ais
      "", // Norsk
      "��ni+",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Vol-", // English
      "Laut-", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Vol-", // Fran�ais
      "", // Norsk
      "��ni-",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Mute", // English
      "Stumm", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Sourdine", // Fran�ais
      "", // Norsk
      "Mykist�",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "New timer", // English
      "Neuen Timer anlegen", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Nouvelle programmation", // Fran�ais
      "", // Norsk
      "Luo uusi ajastin",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Edit", // English
      "�ndern", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Editer", // Fran�ais
      "", // Norsk
      "Muokkaa",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Weekday", // English
      "Wochentag", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Jour de la semaine", // Fran�ais
      "", // Norsk
      "Viikonp�iv�",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Use VPS", // English
      "VPS verwenden", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Utiliser VPS", // Fran�ais
      "", // Norsk
      "K�yt� VPS-toimintoa",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Monday", // English
      "Montag", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Lundi", // Fran�ais
      "", // Norsk
      "Maanantai",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Tuesday", // English
      "Dienstag", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Mardi", // Fran�ais
      "", // Norsk
      "Tiistai",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Wednesday", // English
      "Mittwoch", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Mercredi", // Fran�ais
      "", // Norsk
      "Keskiviikko",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Thursday", // English
      "Donnerstag", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Jeudi", // Fran�ais
      "", // Norsk
      "Torstai",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Friday", // English
      "Freitag", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Vendredi", // Fran�ais
      "", // Norsk
      "Perjantai",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Saturday", // English
      "Samstag", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Samedi", // Fran�ais
      "", // Norsk
      "Lauantai",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Sunday", // English
      "Sonntag", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Dimanche", // Fran�ais
      "", // Norsk
      "Sunnuntai",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Yes", // English
      "Ja", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Oui", // Fran�ais
      "", // Norsk
      "kyll�",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "No", // English
      "Nein", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Non", // Fran�ais
      "", // Norsk
      "ei",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Searchtimers", // English
      "Suchtimer", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Recherche de programmation", // Fran�ais
      "", // Norsk
      "Hakuajastin",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "retrieving status ...", // English
      "Hole Status ...", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "R�cup�re le status ...", // Fran�ais
      "", // Norsk
      "Haetaan tietoja ...",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "previous channel", // English
      "Sender zur�ck", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Cha�ne pr�c�dente", // Fran�ais
      "", // Norsk
      "Edellinen kanava",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "next channel", // English
      "Sender vor", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Cha�ne suivante", // Fran�ais
      "", // Norsk
      "Seuraava kanava",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Record this", // English
      "Diese Sendung aufnehmen", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Enregistrer", // Fran�ais
      "", // Norsk
      "Tallenna ohjelma",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Edit this", // English
      "Timer editieren", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Editer la programmation", // Fran�ais
      "", // Norsk
      "Muokkaa ajastinta",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Click to view details.", // English
      "F�r Details klicken.", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Cliquer pour les d�tails.", // Fran�ais
      "", // Norsk
      "Napsauta katsoaksesi lis�tietoja.",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "more", // English
      "mehr", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Plus", // Fran�ais
      "", // Norsk
      "lis�tietoja",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Switch to this channel.", // English
      "Zu diesem Kanal umschalten.", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Regarder", // Fran�ais
      "", // Norsk
      "Vaihda kanavalle",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "play this recording.", // English
      "Diese Aufnahme abspielen.", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Lire cet enregistrement", // Fran�ais
      "", // Norsk
      "Toista tallenne",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Toggle updates on/off.", // English
      "Statusabfrage ein- oder ausschalten.", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Activer/D�sactiver l'update du status", // Fran�ais
      "", // Norsk
      "Aseta tilannekysely p��lle/pois",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "no epg info for current event!", // English
      "Keine Infos zur Sendung!", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Pas d'info, pour cette �v�nement !", // Fran�ais
      "", // Norsk
      "L�hetyksell� ei ole ohjelmatietoja!",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "no epg info for current channel!", // English
      "Dieser Kanal hat kein EPG!", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Pas d'EPG pour cette cha�ne !", // Fran�ais
      "", // Norsk
      "Kanavalla ei ole ohjelmatietoja!",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "no current channel!", // English
      "Keinen Kanal gefunden!", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Pas de cha�ne trouv�e !", // Fran�ais
      "", // Norsk
      "Kanavaa ei l�ydy!",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "error retrieving status info!", // English
      "Fehler: Status nicht verf�gbar!", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Erreur: Status non disponible !", // Fran�ais
      "", // Norsk
      "Virhe: tilannetietoja ei saatavilla!",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "No server response!", // English
      "Der Server antwortet nicht!", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "", // Fran�ais
      "", // Norsk
      "", // Finnish
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Failed to update infobox!", // English
      "Kann Infobox nicht aktualisieren!", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "", // Fran�ais
      "", // Norsk
      "", // Finnish
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Show dynamic VDR information box", // English
      "Zeige eine dynamische VDR Status Box", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "", // Fran�ais
      "", // Norsk
      "", // Finnish
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "View the schedule of this channel", // English
      "Zeige Programm dieses Kanals", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Voir le programme de la cha�ne", // Fran�ais
      "", // Norsk
      "N�yt� ohjelmisto kanavalta",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Search term", // English
      "Suchbegriff", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Crit�re de recherche", // Fran�ais
      "", // Norsk
      "Hakuehto",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Search mode", // English
      "Suchmodus", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Mode de recherche", // Fran�ais
      "", // Norsk
      "Hakutapa",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "phrase",
      "Ausdruck",
      "",// TODO
      "frase",// Italiano
      "uitdruk",
      "",// TODO
      "Phrase",
      "",// TODO
      "fraasi",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "all words",
      "alle Worte",
      "",// TODO
      "tutte le parole",// Italiano
      "alle woorden",
      "",// TODO
      "tous les mots",
      "",// TODO
      "kaikki sanat",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "at least one word",
      "ein Wort",
      "",// TODO
      "almeno una parola",// Italiano
      "ten minste een woord",
      "",// TODO
      "un mot",
      "",// TODO
      "yksi sana",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },

    { "match exactly",
      "exakt",
      "",// TODO
      "esatta corrispondenza",// Italiano
      "precies passend",
      "",// TODO
      "correspond exactement",
      "",// TODO
      "t�sm�llinen",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Ees  ti
      "",// TODO Dansk
      "",// TODO �esky (Czec  h)

    },
    { "regular expression",
      "regul�rer Ausdruck",
      "",// TODO
      "espressione regolare",// Italiano
      "reguliere uitdruk  king",
      "",// TODO
      "expression r�guli�re",
      "",// TODO
      "s��nn�llinen lauseke",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Ees  ti
      "",// TODO Dansk
      "",// TODO �esky (Czec  h)
    },
    { "Match case",
      "Gro�/klein",
      "",// TODO
      "Mai    uscolo/Minuscolo",// Italiano
      "Idem case",
      "",// TODO
      "Majuscule/Minuscule",
      "",// TODO
      "Huomioi kirjainkoko",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Tolerance",
      "Toleranz",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "Tol�rance",// TODO
      "",// TODO
      "Toleranssi",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "fuzzy",
      "unscharf",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "impr�cis",
      "",// TODO
      "sumea",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Search in", // English
      "Suche in", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Chercher dans", // Fran�ais
      "", // Norsk
      "Hae kentist�",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Title", // English
      "Titel", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Titre", // Fran�ais
      "", // Norsk
      "Otsikko",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Episode", // English
      "Episode", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Episode", // Fran�ais
      "", // Norsk
      "Jakson nimi",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Description", // English
      "Beschreibung", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Description", // Fran�ais
      "", // Norsk
      "Kuvaus",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Show schedule of channel", // English
      "Zeige Programm dieses Kanals", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Afficher le programme de ", // Fran�ais
      "", // Norsk
      "N�yt� kanavan ohjelmisto",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Use channel",
      "Verw. Kanal",
      "",// TODO
      "Utilizzare canale",// Italiano
      "Gebruik kanaal",
      "",// TODO
      "Utiliser la cha�ne",
      "",// TODO
      "K�yt� kanavaa",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "interval",
      "Bereich",
      "",// TODO
      "intervallo",// Italiano
      "interval",
      "",// TODO
      "intervalle",// Francais Pat
      "",// TODO
      "kyll�",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "channel group",
      "Kanalgruppe",
      "",// TODO
      "gruppo canali",// Italiano
      "kanaal groep",
      "",// TODO
      "Groupe de cha�nes",// Francais Pat
      "",// TODO
      "kanavaryhm�",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "only FTA",
      "ohne PayTV",
      "",// TODO
      "solo FTA",// Italiano
      "alleen FTA",
      "",// TODO
      "sans TV-Payante",
      "",// TODO
      "vapaat kanavat",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "from channel",
      "von Kanal",
      "",// TODO
      "da canale",// Italiano
      "van kanaal",
      "",// TODO
      "de la Cha�ne",
      "",// TODO
      "Kanavasta",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "to channel",
      "bis Kanal",
      "",// TODO
      "a canale",// Italiano
      "tot kanaal",
      "",// TODO
      "� la Cha�ne",
      "",// TODO
      "Kanavaan",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Use extended EPG info",
      "Verw. erweiterte EPG Info",
      "",// TODO
      "Utilizzare informazioni EPG estesa",// Italiano
      "Gebruik uitgebreide EPG info",
      "",// TODO
      "Utiliser les infos EPG avanc�es",// Francais Pat
      "",// TODO
      "K�yt� laajennettua ohjelmaopasta",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Use time",
      "Verw. Uhrzeit",
      "",// TODO
      "Utilizzare l'orario",// Italiano
      "Gebruik tijd",
      "",// TODO
      "Utiliser l'heure",
      "",// TODO
      "K�yt� aloitusaikaa",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Start after",
      "Start nach",
      "",// TODO
      "Comincia dopo",// Italiano
      "Start na",
      "",// TODO
      "D�but apr�s",
      "",// TODO
      "Aloitusaika aikaisintaan",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Start before",
      "Start vor",
      "",// TODO
      "Comincia prima",// Italiano
      "Start voor",
      "",// TODO
      "D�but avant",
      "",// TODO
      "Aloitusaika viimeist��n",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Use duration",
      "Verw. Dauer",
      "",// TODO
      "Utilizzare durata",// Italiano
      "Gebruiks duur",
      "",// TODO
      "Utiliser dur�e d'�mission",
      "",// TODO
      "K�yt� kestoaikaa",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Max. duration",
      "Max. Dauer",
      "",// TODO
      "Durata Massima",// Italiano
      "Max. duur",
      "",// TODO
      "Dur�e max.",
      "",// TODO
      "Kestoaika enint��n",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Min. duration",
      "Min. Dauer",
      "",// TODO
      "Durata Minima",// Italiano
      "Min. duur",
      "",// TODO
      "Dur�e min.",
      "",// TODO
      "Kestoaika v�hint��n",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Use day of week",
      "Verw. Wochentag",
      "",// TODO
      "Utilizzare giorno della settimana",// Italiano
      "Gebruik dag van de week",
      "",// TODO
      "Utiliser les jours de la semaine",
      "",// TODO
      "K�yt� viikonp�iv��",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Use blacklists",
      "Verw. Ausschlusslisten",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "Utiliser la liste des exclus",// TODO
      "",// TODO
      "K�yt� mustia listoja",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Use in favorites menu",
      "In Favoritenmen� verw.",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "Utiliser le menu favoris",
      "",// TODO
      "K�yt� suosikkina",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Use as search timer",
      "Als Suchtimer verwenden",
      "",// TODO
      "Utilizzare come timer di ricerca",// Italiano
      "Gebruik als zoek timer",
      "",// TODO
      "Utiliser la recherche",
      "",// TODO
      "K�yt� hakuajastimena",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Record",
      "Aufnehmen",
      "Posnemi",
      "Registra",
      "Opnemen",
      "Gravar",
      "Enregistre",
      "Ta opp",
      "Tallenna",
      "Nagraj",
      "Grabar",
      "�������",
      "Inspelning",
      "�nregistr.",
      "Felvenni",
      "Gravar",
      "������",
      "Snimi",
      "Salvesta",
      "Optag",
      "Nahr�t",
    },
    { "Switch only",
      "Nur umschalten",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "Change seulement de chaine",
      "",// TODO
      "Kanavanvaihto",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Announce only",
      "Nur ank�ndigen",
      "",// TODO
      "Solo annuncio (niente timer)",// Italiano
      "Alleen aankondigen (geen timer)",
      "",// TODO
      "Annonce seulement le d�but du programme",
      "",// TODO
      "Muistutus",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Series recording",
      "Serienaufnahme",
      "",// TODO
      "Registrazione serie",// Italiano
      "Serie's opnemen",
      "",// TODO
      "Enregistrement de s�rie",
      "",// TODO
      "Sarjatallennus",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Directory",
      "Verzeichnis",
      "",// TODO
      "Cartella",// Italiano
      "Directory",
      "",// TODO
      "Dossier",
      "",// TODO
      "Hakemisto",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Delete recordings after ... days",
      "Aufn. nach ... Tagen l�schen",
      "",// TODO
      "",// Italiano
      "",// TODO
      "",// TODO
      "Effacer l'enregistrement apr�s ... jours",// Francais Pat
      "",// TODO
      "Poista tallenteet ... p�iv�n j�lkeen",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Keep ... recordings",
      "Behalte ... Aufnahmen",
      "",// TODO
      "",// Italiano
      "",// TODO
      "",// TODO
      "Garder .... enregistrements",
      "",// TODO
      "S�ilyt� ... tallennetta",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Pause when ... recordings exist",
      "Pause, wenn ... Aufnahmen exist.",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "Pause, lorsque ... enregistrement existe",// TODO
      "",// TODO
      "Keskeyt� ... tallenteen j�lkeen",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Switch ... minutes before start",
      "Umschalten ... Minuten vor Start",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "Changer ... minutes avant le d�but",// TODO
      "",// TODO
      "Vaihda ... minuuttia ennen alkua",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Avoid repeats",
      "Vermeide Wiederholung",
      "",// TODO
      "",// Italiano
      "",// TODO
      "",// TODO
      "Eviter les rediffusions",// Francais Pat
      "",// TODO
      "Est� uusinnat",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Allowed repeats",
      "Erlaubte Wiederholungen",
      "",// TODO
      "",// Italiano
      "",// TODO
      "",// TODO
      "Rediffusions autoris�es",// Francais Pat
      "",// TODO
      "Sallittujen uusintojen lukum��r�",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Only repeats within ... days",
      "Nur Wiederh. innerhalb ... Tagen",
      "",// TODO
      "",// Italiano
      "",// TODO
      "",// TODO
      "R�p�t� seulement pendant ... jours",// Francais Pat
      "",// TODO
      "Vain uusinnat ... p�iv�n sis�ll�",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Compare title",
      "Vergleiche Titel",
      "",// TODO
      "",// Italiano
      "",// TODO
      "",// TODO
      "Comparer titres",// Francais Pat
      "",// TODO
      "Vertaa nime�",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Compare subtitle",
      "Vergleiche Untertitel",
      "",// TODO
      "",// Italiano
      "",// TODO
      "",// TODO
      "Comparer les sous-titres",// Francais Pat
      "",// TODO
      "Vertaa jakson nime�",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)

    },
    { "Compare summary",
      "Vergleiche Beschreibung",
      "",// TODO
      "",// Italiano
      "",// TODO
      "",// TODO
      "Comparer les descriptions",// Francais Pat
      "",// TODO
      "Vertaa kuvausta",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Compare",
      "Vergleiche",
      "",// TODO
      "",// Italiano
      "",// TODO
      "",// TODO
      "Comparer",// Francais Pat
      "",// TODO
      "Vertaa",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Selection",
      "Auswahl",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "Selection",// TODO
      "",// TODO
      "valittu",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)

    },
    { "all",
      "alle",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "tous",// TODO
      "",// TODO
      "kaikki",
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO
      "",// TODO Eesti
      "",// TODO Dansk
      "",// TODO �esky (Czech)
    },
    { "Search results",
      "Suchergebnisse",
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "R�sultat de la recherche", // Fran�ais
      "", // Norsk
      "Hakutulokset",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "No search results",
      "keine Suchergebnisse",
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Pas de r�sultat pour la recherche", // Fran�ais
      "", // Norsk
      "Ei hakutuloksia",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Power", // English
      "Ausschalten", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Power", // Fran�ais
      "", // Norsk
      "Virta",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Begin Recording", // English
      "Sofortaufnahme", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Commencer � enregistrer", // Fran�ais
      "", // Norsk
      "Aloita tallennus",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Up", // English
      "Hoch", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Haut", // Fran�ais
      "", // Norsk
      "Yl�s",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Down", // English
      "Runter", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Bas", // Fran�ais
      "", // Norsk
      "Alas",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Left", // English
      "Links", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Gauche", // Fran�ais
      "", // Norsk
      "Vasen",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Right", // English
      "Rechts", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Droite", // Fran�ais
      "", // Norsk
      "Oikea",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Red", // English
      "Rot", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Rouge", // Fran�ais
      "", // Norsk
      "Punainen",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Green", // English
      "Gr�n", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Vert", // Fran�ais
      "", // Norsk
      "Vihre�",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Yellow", // English
      "Gelb", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Jaune", // Fran�ais
      "", // Norsk
      "Keltainen",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Blue", // English
      "Blau", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Bleu", // Fran�ais
      "", // Norsk
      "Sininen",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "New",
      "Neu",
      "Novo",
      "Nuovo",
      "Nieuw",
      "Novo",
      "Nouveau",
      "Ny",
      "Uusi",
      "Nowy",
      "Nuevo",
      "N��",
      "Ny",
      "Nou",
      "�j",
      "Nou",
      "��������",
      "Novi",
      "Uus",
      "Ny",
      "Nov�",
    },
    { "Toggle timer active/inactive",
      "Timer aktiv/inaktiv schalten",
      "",
      "",
      "",
      "",
      "Activer/D�sactiver la programmation",
      "",
      "Aseta ajastin p��lle/pois",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
    },
    { "Delete timer",
      "Timer l�schen",
      "",
      "",
      "",
      "",
      "Supprimer la programmation",
      "",
      "Poista ajastin",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
    },
    { "Edit timer",
      "Timer bearbeiten",
      "",
      "",
      "",
      "",
      "Editer la programmation",
      "",
      "Muokkaa ajastinta",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
    },
    { "Toggle search timer actions (in)active",
      "Aktionen des Suchtimers (de)aktivieren",
      "",
      "",
      "",
      "",
      "(d�s)activer la programmation de cette recherche",
      "",
      "Aseta hakuajastin p��lle/pois",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
    },
    { "Browse search timer results",
      "Suchtimerergebnisse betrachten",
      "",
      "",
      "",
      "",
      "Afficher les r�sultats de la recherche",
      "",
      "Selaa hakutuloksia",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
    },
    { "Delete search timer",
      "Suchtimer l�schen",
      "",
      "",
      "",
      "",
      "Supprimer la recherche",
      "",
      "Poista hakuajastin",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
    },
    { "Expression",
      "Suchbegriff",
      "",
      "",
      "",
      "",
      "Expression",
      "",
      "Hakulauseke",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
    },
    { "Edit search timer",
      "Suchtimer bearbeiten",
      "",
      "",
      "",
      "",
      "Editer la recherche",
      "",
      "Muokkaa hakuajastinta",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
    },
    { "New search timer",
      "Neuen Suchtimer anlegen",
      "",
      "",
      "",
      "",
      "Nouvelle recherche de programmation",
      "",
      "Luo uusi hakuajastin",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
    },
	{ "Delete this search timer?", // English
	  "Diesen Suchtimer l�schen?", // Deutsch
	  "", // Slovenski
	  "", // Italiano
	  "", // Nederlands
	  "", // Portugu�s
	  "Supprimer cette recherche ?", // Fran�ais
	  "", // Norsk
	  "Poistetaanko t�m� hakuajastin?",
	  "", // Polski
	  "", // Espa�ol
	  "", // Greek
	  "", // Svenska
	  "", // Rom�n�
	  "", // Magyar
	  "", // Catal�
	  "", // Russian
	  "", // Hrvatski
	  "", // Eesti
	  "", // Dansk
	  "", // Czech
	},
    { "Cancel",
      "Abbrechen",
      "",
      "",
      "",
      "",
      "Abandonner",
      "",
      "Peru",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
    },

    { "All",
      "Alle",
      "",
      "",
      "",
      "",
      "Tous",
      "",
      "Kaikki",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
      "",
    },
	{ "Test", // English
      "Testen", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Test�", // Fran�ais
      "", // Norsk
      "Testaa",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
	},
	{ "The time the show may start at the latest", // English
      "Die Zeit, zu der die Sendung sp�testens angefangen haben muss", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Heure � laquelle l'�mission doit d�marrer au plus tard", // Fran�ais
      "", // Norsk
      "L�hetyksen aloitusaika viimeist��n",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
	},
	{ "The time the show may start at the earliest", // English
      "Die Zeit, zu der die Sendung fr�hestens anfangen darf", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Heure � laquelle l'�mission doit d�marrer au plus t�t", // Fran�ais
      "", // Norsk
      "L�hetyksen aloitusaika aikaisintaan",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
	},
	{ "Search text too short - use anyway?",
	  "Suchtext zu kurz - trotzdem verwenden?",
	  "",// TODO
	  "Il testo da cercare � troppo corto.  Continuare lo stesso?",// Italiano
	  "Zoek tekst tekort - toch gebruiken?",
	  "",// TODO
	  "Le texte de recherche est trop court - Utiliser tout m�me ?",
	  "",// TODO
	  "Liian suppea hakuehto - etsit��nk� silti?",
	  "",// TODO
	  "",// TODO
	  "",// TODO
	  "",// TODO
	  "",// TODO
	  "",// TODO
	  "",// TODO 
	  "",// TODO
	  "",// TODO
	  "",// TODO Eesti
	  "",// TODO Dansk
	  "",// TODO �esky (Czech)
	
	},
	{ "User", // English
      "Benutzer", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Utilisateur", // Fran�ais
      "", // Norsk
      "K�ytt�j�",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
	},
	{ "Password", // English
      "Passwort", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Mot de passe", // Fran�ais
      "", // Norsk
      "Salasana",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
	},
	{ "Last channel to display", // English
      "Letzer angezeigter Kanal", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Derni�re cha�ne affich�e", // Fran�ais
      "", // Norsk
      "N�yt� viimeisen� kanava",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
	},
	{ "Use authentication", // English
      "Authentifizierung nutzen", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Utiliser authentification", // Fran�ais
      "", // Norsk
      "K�yt� autentikointia",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
	},
	{ "No limit", // English
      "Alle zeigen", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Pas de limite", // Fran�ais
      "", // Norsk
      "ei rajoitusta",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
	},
	{ "Admin login", // English
      "Admin Login", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Login Admin", // Fran�ais
      "", // Norsk
      "Yll�pidon k�ytt�j�tunnus",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
	},
	{ "Admin password", // English
      "Admin Passwort", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Mot de passe Admin", // Fran�ais
      "", // Norsk
      "Yll�pidon salasana",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
	},
	{ "VDR Live Login", // English
      "VDR Live Login", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "VDR Live - Connexion", // Fran�ais
      "", // Norsk
      "VDR Live - sis��nkirjautuminen",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
	},
    { "Logout", // English
      "Abmelden", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "D�connexion", // Fran�ais
      "", // Norsk
      "Kirjaudu ulos",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Login", // English
      "Anmelden", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Connexion", // Fran�ais
      "", // Norsk
      "Kirjaudu sis��n",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
	{ "Search", // English
	  "Suchen", // Deutsch
	  "", // Slovenski
	  "", // Italiano
	  "", // Nederlands
	  "", // Portugu�s
	  "Rechercher", // Fran�ais
	  "", // Norsk
	  "Etsi",
	  "", // Polski
	  "", // Espa�ol
	  "", // Greek
	  "", // Svenska
	  "", // Rom�n�
	  "", // Magyar
	  "", // Catal�
	  "", // Russian
	  "", // Hrvatski
	  "", // Eesti
	  "", // Dansk
	  "", // Czech
	},
	{ "Extended search", // English
	  "Erweiterte Suche", // Deutsch
	  "", // Slovenski
	  "", // Italiano
	  "", // Nederlands
	  "", // Portugu�s
	  "Recherche �tendue", // Fran�ais
	  "", // Norsk
	  "Laajennettu haku",
	  "", // Polski
	  "", // Espa�ol
	  "", // Greek
	  "", // Svenska
	  "", // Rom�n�
	  "", // Magyar
	  "", // Catal�
	  "", // Russian
	  "", // Hrvatski
	  "", // Eesti
	  "", // Dansk
	  "", // Czech
	},
	{ "Search settings", // English
	  "Einstellungen zur Suche", // Deutsch
	  "", // Slovenski
	  "", // Italiano
	  "", // Nederlands
	  "", // Portugu�s
	  "Param�tre de recherche", // Fran�ais
	  "", // Norsk
	  "Hakuasetukset",
	  "", // Polski
	  "", // Espa�ol
	  "", // Greek
	  "", // Svenska
	  "", // Rom�n�
	  "", // Magyar
	  "", // Catal�
	  "", // Russian
	  "", // Hrvatski
	  "", // Eesti
	  "", // Dansk
	  "", // Czech
	},
	{ "On archive DVD No.", // English
	  "Auf Archiv-DVD Nr.", // Deutsch
	  "", // Slovenski
	  "", // Italiano
	  "", // Nederlands
	  "", // Portugu�s
	  "Num�ro d'archive DVD", // Fran�ais
	  "", // Norsk
	  "Arkistointi-DVD:ll� numero",
	  "", // Polski
	  "", // Espa�ol
	  "", // Greek
	  "", // Svenska
	  "", // Rom�n�
	  "", // Magyar
	  "", // Catal�
	  "", // Russian
	  "", // Hrvatski
	  "", // Eesti
	  "", // Dansk
	  "", // Czech
	},
      { "Starts between", // English
      "Beginnt zwischen", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "D�but entre", // Fran�ais
      "", // Norsk
      "Alkaa v�lill�",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
      },
      { "Wrong username or password", // English
      "Falscher Benutzername oder Passwort", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Erreur de nom d'utilisateur ou de mot de passe", // Fran�ais
      "", // Norsk
      "V��r� k�ytt�j�tunnus tai salasana",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
      },
      { "Required minimum version of epgsearch: ", // English
      "Ben�tigte Mindestversion von epgsearch: ", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Version minimum requise de epgsearch : ", // Fran�ais
      "", // Norsk
      "Vaadittava versio EPGSearch-laajennoksesta: ",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
      },
      { "EPGSearch version outdated! Please update.", // English
      "EPGSearch-Version zu alt, bitte updaten!", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "Version de EPGSearch obsol�te ! Veuillez faire la mise � jour.", // Portugu�s
      "", // Fran�ais
      "", // Norsk
      "EPGSearch-laajennos pit�isi p�ivitt��!",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
      },
      { "Search for repeats.", // English
      "Nach Wiederholungen suchen.", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Recherche des rediffusions", // Fran�ais
      "", // Norsk
      "Etsi toistuvat",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
      },
    { "What's on",
      "Was l�uft",
      "", // Slovenski
      "", // Italiono
      "", // Nederlands
      "", // Portugu�s
      "Diffus�", // Fran�ais
      "", // Norsk
      "Menossa",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "What's on?",
      "Was l�uft?",
      "", // Slovenski
      "", // Italiono
      "", // Nederlands
      "", // Portugu�s
      "Programmes en cours ?", // Fran�ais
      "", // Norsk
      "Menossa?",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Now",
      "Jetzt",
      "", // Slovenski
      "", // Italiono
      "", // Nederlands
      "", // Portugu�s
      "Maintenant", // Fran�ais
      "", // Norsk
      "Nyt",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Next",
      "als N�chstes",
      "", // Slovenski
      "", // Italiono
      "", // Nederlands
      "", // Portugu�s
      "Apr�s", // Fran�ais
      "", // Norsk
      "Seuraavaksi",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "additional fixed times in 'What's on?'",
      "zus�tzliche Zeitpunkte in 'Was l�uft?'",
      "", // Slovenski
      "", // Italiono
      "", // Nederlands
      "", // Portugu�s
      "Heure fixe additionnel dans 'Programme en cours'", // Fran�ais
      "", // Norsk
      "Lis�ajankohdat 'Menossa?'-sivulle",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Format is HH:MM. Separate multiple times with a semicolon",
      "Format ist HH:MM. Mehrere Zeiten durch Semikolon trennen",
      "", // Slovenski
      "", // Italiono
      "", // Nederlands
      "", // Portugu�s
      "Le format est HH:MM. S�par� par des points virgule.", // Fran�ais
      "", // Norsk
      "K�yt� HH:MM formaattia ja erota ajankohdat puolipisteell�",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "at",
      "um",
      "", // Slovenski
      "", // Italiono
      "", // Nederlands
      "", // Portugu�s
      "�", // Fran�ais
      "", // Norsk
      "Kello",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Authors",
      "Autoren",
      "", // Slovenski
      "", // Italiono
      "", // Nederlands
      "", // Portugu�s
      "Auteur", // Fran�ais
      "", // Norsk
      "Tekij�t",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Project leader",
      "Projektleiter",
      "", // Slovenski
      "", // Italiono
      "", // Nederlands
      "", // Portugu�s
      "Chef de projet", // Fran�ais
      "", // Norsk
      "Projektip��llikk�",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Webserver",
      "Webserver",
      "", // Slovenski
      "", // Italiono
      "", // Nederlands
      "", // Portugu�s
      "Serveur Web", // Fran�ais
      "", // Norsk
      "HTTP-palvelin",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Content",
      "Inhalte",
      "", // Slovenski
      "", // Italiono
      "", // Nederlands
      "", // Portugu�s
      "Contenu", // Fran�ais
      "", // Norsk
      "Sis�lt�",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Graphics",
      "Grafiken",
      "", // Slovenski
      "", // Italiono
      "", // Nederlands
      "", // Portugu�s
      "Graphique", // Fran�ais
      "", // Norsk
      "Grafiikka",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Information",
      "Informationen",
      "", // Slovenski
      "", // Italiono
      "", // Nederlands
      "", // Portugu�s
      "Information", // Fran�ais
      "", // Norsk
      "Tietoja",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "LIVE version",
      "LIVE Version",
      "", // Slovenski
      "", // Italiono
      "", // Nederlands
      "", // Portugu�s
      "Version de LIVE", // Fran�ais
      "", // Norsk
      "LIVE-versio",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "VDR version",
      "VDR Version",
      "", // Slovenski
      "", // Italiono
      "", // Nederlands
      "", // Portugu�s
      "Version de VDR", // Fran�ais
      "", // Norsk
      "VDR-versio",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Features",
      "Unterst�tze Plugins",
      "", // Slovenski
      "", // Italiono
      "", // Nederlands
      "", // Portugu�s
      "Plugins", // Fran�ais
      "", // Norsk
      "Tuetut laajennokset",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
    { "Homepage",
      "Homepage",
      "", // Slovenski
      "", // Italiono
      "", // Nederlands
      "", // Portugu�s
      "Site Web", // Fran�ais
      "", // Norsk
      "Kotisivu",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
    },
      { "Couldn't find timer. Maybe you mistyped your request?", // English
      "Konnte Timer nicht finden. Evtl. fehlerhafte Anforderung?", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "N'a pas trouver de programmation. Peut �tre une erreur dans la requ�te ?", // Fran�ais
      "", // Norsk
      "Ajastinta ei l�ydy. Kirjoititko varmasti oikein?",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
      },
      { "Couldn't find channel or no channels available. Maybe you mistyped your request?", // English
      "Konnte Kanal nicht finden oder keine Kan�le verf�gbar. Ist die Anfrage korrekt?", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "N'a pas trouv� la cha�ne ou cha�ne non disponible. Peut �tre une erreur dans la requ�te ?", // Fran�ais
      "", // Norsk
      "Kanavaa ei l�ydy. Kirjoititko varmasti oikein?",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
      },
      { "Page error", // English
      "Seitenfehler", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Erreur de page", // Fran�ais
      "", // Norsk
      "Sivuvirhe",
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
      },
      { "If you encounter any bugs or would like to suggest new features, please use our bugtracker", // English
      "F�r Fehler oder Verbesserungsvorschl�ge steht unser Bugtracker bereit", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Si vous rencontrez des bugs ou souhaitez sugg�rer de nouvelles fonctions, utilisez svp notre bugtracker", // Fran�ais
      "", // Norsk
      "Voit raportoida sek� virheet ett� parannusehdotukset suoraan havaintotietokantaan", // Finnish
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
      },
      { "Bugs and suggestions", // English
      "Fehlerberichte und Vorschl�ge", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Bugs et suggestions", // Fran�ais
      "", // Norsk
      "Virheraportoinnit ja parannusehdotukset", // Finnish
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
      },
      { "Find more at the Internet Movie Database.", // English
      "Weitere Informationen in der Internet Movie Database.", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Chercher sur Internet Movie Database", // Fran�ais
      "", // Norsk
      "Hae IMDB:st�", // Finnish
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
      },
      { "Details view", // English
      "Ausf�hrliche Ansicht", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Affichage d�tails", // Fran�ais
      "", // Norsk
      "Ruudukkon�kym�", // Finnish
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
      },
      { "List view", // English
      "Listenansicht", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Affichage liste", // Fran�ais
      "", // Norsk
      "Listan�kym�", // Finnish
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
      },
      { "No timer defined", // English
      "Keine Timer vorhanden", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Pas de programmation d�finit", // Fran�ais
      "", // Norsk
      "Ajastinta ei ole m��ritelty", // Finnish
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
      },
      { "Start page", // English
      "Startseite", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Page de d�marrage", // Fran�ais
      "", // Norsk
      "Aloitussivu", // Finnish
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
      },
      { "active", // English
      "aktiv", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "activer", // Fran�ais
      "", // Norsk
      "", // Finnish
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
	  },
      { "required", // English
      "erforderlich", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "requis", // Fran�ais
      "", // Norsk
      "", // Finnish
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
      },
      { "Local net (no login required)", // English
      "Lokales Netz (keine Anmeldung notwendig)", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "R�seau local (Pas d'identification requis)", // Fran�ais
      "", // Norsk
      "", // Finnish
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
      },
      { "Theme", // English
      "Thema", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Th�me", // Fran�ais
      "", // Norsk
      "", // Finnish
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
      },
      { "Please set login and password!", // English
      "Bitte Login und Passwort angeben!", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "SVP indiqu� un nom d'utilisateur et mot de passe !", // Fran�ais
      "", // Norsk
      "", // Finnish
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
      },
      { "Please set a title for the timer!", // English
      "Bitte einen Titel f�r den Timer angeben!", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "SVP indiqu� un titre pour la programmation !", // Fran�ais
      "", // Norsk
      "", // Finnish
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
      },
      { "Setup saved.", // English
      "Einstellungen gespeichert.", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Param�tre sauvegard�", // Fran�ais
      "", // Norsk
      "", // Finnish
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
      },
      { "Trigger search timer update", // English
      "Suchtimer-Update starten", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "Mise � jour des recherches de programmation maintenant", // Fran�ais
      "", // Norsk
      "", // Finnish
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
      },
    /*
      { "", // English
      "", // Deutsch
      "", // Slovenski
      "", // Italiano
      "", // Nederlands
      "", // Portugu�s
      "", // Fran�ais
      "", // Norsk
      "", // Finnish
      "", // Polski
      "", // Espa�ol
      "", // Greek
      "", // Svenska
      "", // Rom�n�
      "", // Magyar
      "", // Catal�
      "", // Russian
      "", // Hrvatski
      "", // Eesti
      "", // Dansk
      "", // Czech
      },
    */
    { 0 },
};

} // namespace vdrlive
