/* These are translations of strings used in live.	If you provide us
   with translations for one of the missing languages or stings,
   please keep the following line in your file and submit your
   extended version of i18n.cpp. (If you would like to submit a patch
   add more context like described below)

   $Id: i18n.cpp,v 1.103 2007/08/03 15:27:24 winni Exp $

   Note to developers:
   How to safely integrate translations from third parties:
	 - move your current verion to a safe name. i.E. i18n.cpp.current
		>$ mv i18n.cpp i18n.cpp.current
	 - checkout the revision of the submitted translations (see Id line)
		>$ cvs update -r<revision> i18n.cpp
	 - create a patch with more than normal context (because of the
	   quite reqular structure of this file). 20 lines of context are safe.
		>$ diff -Nur -U 20 i18n.cpp i18n.cpp.translated > i18n.diff
	 - IMPORTANT: reset your version of the file: (clears the sticky
	   tag created on checkout above)
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

I18n& LiveI18n()
{
	static I18n instance;
	return instance;
}

I18n::I18n()
  : m_encoding(
#if VDRVERSNUM >= 10503
		cCharSetConv::SystemCharacterTable() ? cCharSetConv::SystemCharacterTable() : "UTF-8"
#else
		I18nCharSets()[::Setup.OSDLanguage]
#endif
		)
{
	// fix encoding spelling for html standard.
	std::string const iso("iso");
	if (m_encoding.find(iso) != std::string::npos) {
		if (iso.length() == m_encoding.find_first_of("0123456789")) {
			m_encoding.insert(iso.length(), "-");
		}
	}
}


const tI18nPhrase Phrases[] = {
	{ "Live Interactive VDR Environment",
	  "Live Interactive VDR Environment",
	  "", // Slovenski
	  "", // Italiono
	  "", // Nederlands
	  "", // Portugu�s
	  "Environnement interactif Live VDR", // Fran�ais Patrice Staudt 16.06.2007
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
	  "Qu'y a t'il au programme vers", // Fran�ais
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
	  "%a, %d.%m.", // Fran�ais
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
	  "%A, %d.%m.%Y", // Fran�ais
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
	  "%A, %x", // Fran�ais
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
	  "Pas d'enregistrement", // Fran�ais
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
	  "Lire l'enregistrement", // Fran�ais
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
	  "arr�ter la lecture", // Fran�ais
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
	  "continuer", // Fran�ais
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
	  "pause", // Fran�ais
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
	  "avance rapide", // Fran�ais
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
	  "retour rapide", // Fran�ais
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
	  "T�l�commande", // Fran�ais
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
	  "Sauvegarde", // Fran�ais
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
	  "Quitter", // Fran�ais
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
	  "Muet", // Fran�ais
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
	  "Changer", // Fran�ais
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
	  "Recherche", // Fran�ais
	  "", // Norsk
	  "Hakuajastimet",
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
	  "mise � jours de l'�tat", // Fran�ais
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
	  "cha�ne pr�c�dent", // Fran�ais
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
	  "Enregistrer cette �mission", // Fran�ais
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
	  "Changer cette programmation", // Fran�ais
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
	  "Clic pour voire les d�tails.", // Fran�ais
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
	  "plus", // Fran�ais
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
	  "Changer vers cette cha�ne. ", // Fran�ais
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
	  "lire cette enregistrement.", // Fran�ais
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
	  "Pas d'infos pour l'�mission!", // Fran�ais
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
	  "Cette cha�ne n'a pas d'EPG!", // Fran�ais
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
	  "pas de cha�ne trouv�!", // Fran�ais
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
	  "erreur: pas d'information d'�tat!", // Fran�ais
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
	  "Palvelin ei vastaa!", // Finnish
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
	  "Infolaatikon p�ivitys ep�onnistui!", // Finnish
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
	{ "loading data", // English
	  "Daten nachladen", // Deutsch
	  "", // Slovenski
	  "", // Italiano
	  "", // Nederlands
	  "", // Portugu�s
	  "", // Fran�ais
	  "", // Norsk
	  "ladataan tiet�ja", // Finnish
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
	{ "an error occured!", // English
	  "Es ist ein Fehler aufgetreten!", // Deutsch
	  "", // Slovenski
	  "", // Italiano
	  "", // Nederlands
	  "", // Portugu�s
	  "", // Fran�ais
	  "", // Norsk
	  "virhe havaittu!", // Finnish
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
	{ "Request succeeded!", // English
	  "Aktion durchgef�hrt!", // Deutsch
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
	{ "Request failed!", // English
	  "Aktion fehlgeschlagen!", // Deutsch
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
	{ "Show live logo image", // English
	  "Zeige das Live Logo", // Deutsch
	  "", // Slovenski
	  "", // Italiano
	  "", // Nederlands
	  "", // Portugu�s
	  "", // Fran�ais
	  "", // Norsk
	  "N�yt� Live-logo", // Finnish
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
	{ "Use ajax technology", // English
	  "Verwende AJAX Technologie", // Deutsch
	  "", // Slovenski
	  "", // Italiano
	  "", // Nederlands
	  "", // Portugu�s
	  "", // Fran�ais
	  "", // Norsk
	  "K�yt� AJAX-tekniikkaa", // Finnish
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
	  "Zeige dynamische VDR Status Box", // Deutsch
	  "", // Slovenski
	  "", // Italiano
	  "", // Nederlands
	  "", // Portugu�s
	  "", // Fran�ais
	  "", // Norsk
	  "N�yt� dynaaminen VDR:n infolaatikko", // Finnish
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
	  "Regarder le programme de cette cha�ne", // Fran�ais
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
	{ "No schedules available for this channel", // English
	  "F�r diesen Kanal liegen keine EPG-Informationen vor", // Deutsch
	  "", // Slovenski
	  "", // Italiano
	  "", // Nederlands
	  "", // Portugu�s
	  "", // Fran�ais
	  "", // Norsk
	  "T�lle kanavalle ei ole saatavilla ohjelmistoa", // Finnish
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
	  "Mot cl�", // Fran�ais
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
	  "tout les mots",
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
	  "expression r�guliere",
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
	  "Mai	  uscolo/Minuscolo",// Italiano
	  "Idem case",
	  "",// TODO
	  "Maj/Minuscule",
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
	  "Recherche dans", // Fran�ais
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
	  "�pisode", // Fran�ais
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
	  "Montrer le programme de la cha�ne", // Fran�ais
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
	  "de la cha�ne",
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
	  "� la cha�ne",
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
	  "D�part apr�s",
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
	  "D�part avant",
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
	  "Dur�e d'utilisation",
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
	  "Utiliser la liste des exclus",
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
	  "Utiliser dans le menu favoris",
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
	  "Seulement changer de chaine",
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
	  "Annoncer seulement le d�but de l'�mission",
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
	  "Garder .... les enregistrements",
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
	  "Pause, lorsque ... l'enregistrement existe.",
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
	  "Changer ... minutes avant le d�but",
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
	  "Eviter les r�p�titions",// Francais Pat
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
	  "R�p�titions autoris�es",// Francais Pat
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
	  "Que r�p�tition, pendant ... jours",// Francais Pat
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
	  "Selection",// Francais Pat
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
	  "tous",// Francais Pat
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
	  "R�sultats", // Fran�ais
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
	  "pas de r�sultat de recherche", // Fran�ais
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
	  "�teindre", // Fran�ais
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
	  "Enregistrement direct", // Fran�ais
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
	  "Vers le haut", // Fran�ais
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
	  "Vers le bas", // Fran�ais
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
	  "Programmation basculer actif/inactif",
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
	  "Effacer la programmation",
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
	  "Actions de la programmation de recherche (in)actives",
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
	  "Passer en revue les r�sultats de programmation de recherche",
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
	  "Effacer la programmation de recherche",
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
	  "Expression de recherche",
	  "",
	  "Hakutermi",
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
	  "Editer l'expression de recherche",
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
	  "Cr�er nouvelle programmation de recherche",
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
	  "Effacer cette programmation de recherche?", // Fran�ais
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
	  "Interrompre",
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
	  "Tout",
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
	  "Tester", // Fran�ais
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
	  "L'heure lorsque l'�mission doit commencer au plus tard", // Fran�ais
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
	  "L'heure lorsque l'�mission doit commencer au plus t�t", // Fran�ais
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
	  "Il testo da cercare � troppo corto.	Continuare lo stesso?",// Italiano
	  "Zoek tekst tekort - toch gebruiken?",
	  "",// TODO
	  "Texte de recherche est trop court - l'utiliser quand m�me?",
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
	  "Utiliser l'authentification", // Fran�ais
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
	  "Afficher tout", // Fran�ais
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
	  "Ouverture Admin", // Fran�ais
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
	  "Mot de passe de l'Admin", // Fran�ais
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
	  "Session VDR Live", // Fran�ais
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
	  "Fin de la session", // Fran�ais
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
	  "Session", // Fran�ais
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
	  "Recherche", // Fran�ais
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
	  "R�glages de recherche", // Fran�ais
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
	  "Sur le DVD archive no�", // Fran�ais
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
	  "D�part entre", // Fran�ais
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
	  "Nom de l'utilisateur ou mot de passei sont erron�", // Fran�ais
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
	  "Version minimum requise d'epgsearch: ", // Fran�ais
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
	  "", // Portugu�s
	  "Version EPGSearch p�rim�e! Mettre � jour Svp.", // Fran�ais
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
	  "Recherche de r�p�titions.", // Fran�ais
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
	  "Actuellement", // Fran�ais
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
	  "Actuellement?", // Fran�ais
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
	  "maintenant", // Fran�ais
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
	  "prochainement", // Fran�ais
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
	  "p�riodes fixes additionnelles dans 'actuellement?'", // Fran�ais
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
	  "Le format est HH:MM . Plusieurs p�riodes s�par�es avec un point-virgule", // Fran�ais
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
	  "kello",
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
	  "Graphiques", // Fran�ais
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
	  "Version LIVE", // Fran�ais
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
	  "Version VDR", // Fran�ais
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
	  "Soutien des plugins", // Fran�ais
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
	  "Page d'accueil", // Fran�ais
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
	  "N'a pas pu trouver la programmation. Peut-�tre vous avez une erreur dans votre requ�te?", // Fran�ais
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
	  "N'a pas pu trouver la cha�ne. Votre requ�te est t'elle corr�te? ", // Fran�ais
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
	  "Si vous rencontrez n'importe quels bogue ou voudriez sugg�rer de nouveaux dispositifs, employer notre bugtracker svp", // Fran�ais
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
	  "Bogues et suggestions", // Fran�ais
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
	  "Trouver plus d'information du film dans la base de donn�es film IMDB.", // Fran�ais
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
	  "Vue d�tail�e", // Fran�ais
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
	  "Vue en liste", // Fran�ais
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
	  "Aucune programmation d�finie", // Fran�ais
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
	  "Page de d�part", // Fran�ais
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
	  "actif", // Fran�ais
	  "", // Norsk
	  "k�yt�ss�", // Finnish
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
	  "vaadittava", // Finnish
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
	  "R�seau local (non requis)", // Fran�ais
	  "", // Norsk
	  "Paikallinen verkko (ei autentikointia)", // Finnish
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
	  "Ulkoasu", // Finnish
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
	  "Entr�e le nom d'utilisateur et le mot de passe svp!", // Fran�ais
	  "", // Norsk
	  "Aseta k�ytt�j�tunnus sek� salasana!", // Finnish
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
	  "Veuillez indiquer un titre pour la programmation!", // Fran�ais
	  "", // Norsk
	  "Aseta nimi ajastimelle!", // Finnish
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
	  "Asetukset tallennettu.", // Finnish
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
	  "P�ivit� hakuajastimet", // Finnish
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
	{ "Electronic program guide information", // English
	  "Elektronische Programminformation", // Deutsch
	  "", // Slovenski
	  "", // Italiano
	  "", // Nederlands
	  "", // Portugu�s
	  "", // Fran�ais
	  "", // Norsk
	  "Ohjelmaoppaan tiedot", // Finnish
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
	{ "Epg error", // English
	  "EPG Fehler", // Deutsch
	  "", // Slovenski
	  "", // Italiano
	  "", // Nederlands
	  "", // Portugu�s
	  "", // Fran�ais
	  "", // Norsk
	  "Ohjelmaoppaan virhe", // Finnish
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
	{ "Auto-delete search timer", // English
	  "Suchtimer automatisch l�schen", // Deutsch
	  "", // Slovenski
	  "", // Italiano
	  "", // Nederlands
	  "", // Portugu?s
	  "", // Fran?ais
	  "", // Norsk
	  "", // Finnish
	  "", // Polski
	  "", // Espa?ol
	  "", // Greek
	  "", // Svenska
	  "", // Rom?n?
	  "", // Magyar
	  "", // Catal?
	  "", // Russian
	  "", // Hrvatski
	  "", // Eesti
	  "", // Dansk
	  "", // Czech
	  },
	{ "after ... recordings", // English
	  "nach ... Aufnahmen", // Deutsch
	  "", // Slovenski
	  "", // Italiano
	  "", // Nederlands
	  "", // Portugu?s
	  "", // Fran?ais
	  "", // Norsk
	  "", // Finnish
	  "", // Polski
	  "", // Espa?ol
	  "", // Greek
	  "", // Svenska
	  "", // Rom?n?
	  "", // Magyar
	  "", // Catal?
	  "", // Russian
	  "", // Hrvatski
	  "", // Eesti
	  "", // Dansk
	  "", // Czech
	  },
	{ "after ... days after first rec.", // English
	  "nach ... Tagen nach erster Aufnahme", // Deutsch
	  "", // Slovenski
	  "", // Italiano
	  "", // Nederlands
	  "", // Portugu?s
	  "", // Fran?ais
	  "", // Norsk
	  "", // Finnish
	  "", // Polski
	  "", // Espa?ol
	  "", // Greek
	  "", // Svenska
	  "", // Rom?n?
	  "", // Magyar
	  "", // Catal?
	  "", // Russian
	  "", // Hrvatski
	  "", // Eesti
	  "", // Dansk
	  "", // Czech
	  },
	{ "user defined", // English
	  "benutzer-definiert", // Deutsch
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
	{ "from date", // English
	  "ab Datum", // Deutsch
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
	{ "to date", // English
	  "bis Datum", // Deutsch
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
	{ "mm/dd/yyyy", // English - Dateformat for Datepicker, use 'mm' for month, 'dd' for day, 'yyyy' for year
	  "dd.mm.yyyy", // Deutsch
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
	{ "January", // English
	  "Januar", // Deutsch
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
	{ "February", // English
	  "Februar", // Deutsch
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
	{ "March", // English
	  "M�rz", // Deutsch
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
	{ "April", // English
	  "April", // Deutsch
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
	{ "May", // English
	  "Mai", // Deutsch
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
	{ "June", // English
	  "Juni", // Deutsch
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
	{ "July", // English
	  "Juli", // Deutsch
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
	{ "August", // English
	  "August", // Deutsch
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
	{ "September", // English
	  "September", // Deutsch
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
	{ "October", // English
	  "Oktober", // Deutsch
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
	{ "November", // English
	  "November", // Deutsch
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
	{ "December", // English
	  "Dezember", // Deutsch
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
