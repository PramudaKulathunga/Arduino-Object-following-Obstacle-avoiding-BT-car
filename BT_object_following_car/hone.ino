const float songSpeed = 1;

#define NOTE_E 330
#define NOTE_F 349
#define NOTE_G 392
#define NOTE_A 440
#define NOTE_B 494
#define NOTE_E2 659

int notes1[] = {NOTE_E2};
int durations1[] = {375};

int notes2[] = {NOTE_A, NOTE_B, NOTE_A, NOTE_B, NOTE_F};
int durations2[] = {125, 125, 125, 125, 125, 250};

int notes3[] = {NOTE_E, NOTE_G, NOTE_E, NOTE_G, NOTE_E, 0, NOTE_A, 0, NOTE_B, 0, NOTE_A, 0, NOTE_G};
int durations3[] = {125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125};

void hone1()
{
  const int totalNotes = sizeof(notes1) / sizeof(int);

  for (int i = 0; i < totalNotes; i++)
  {
    const int currentNote = notes1[i];
    float wait = durations1[i] / songSpeed;
    if (currentNote != 0)
    {
      tone(buzzer, notes1[i], wait);
    }
    else
    {
      noTone(buzzer);
    }
    delay(wait);
  }
}

void hone2()
{
  const int totalNotes = sizeof(notes2) / sizeof(int);

  for (int i = 0; i < totalNotes; i++)
  {
    const int currentNote = notes2[i];
    float wait = durations2[i] / songSpeed;
    if (currentNote != 0)
    {
      tone(buzzer, notes2[i], wait);
    }
    else
    {
      noTone(buzzer);
    }
    delay(wait);
  }
}

void hone3()
{
  const int totalNotes = sizeof(notes3) / sizeof(int);

  for (int i = 0; i < totalNotes; i++)
  {
    const int currentNote = notes3[i];
    float wait = durations3[i] / songSpeed;
    if (currentNote != 0)
    {
      tone(buzzer, notes3[i], wait);
    }
    else
    {
      noTone(buzzer);
    }
    delay(wait);
  }
}
