params ["_subject", "_title", "_text"];

if (!(player diarySubjectExists _subject)) then {
  player createDiarySubject [_subject, _subject];
};

player createDiaryRecord [_subject, [_title, _text]];
