import React from 'react';
import './Events.css';
import { FaArrowLeft } from "react-icons/fa";

const Events = () => {
  const eventSchedule = [
    {
      title: "SPANDAN TEASER",
      duration: "20-30 seconds",
      performers: [],
    },
    {
      title: "KULGEET",
      performers: [],
    },
    {
      title: "Saraswati Vandana",
      // Extracted performers from "(Tanisha and Rohit)"
      performers: ["Tanisha", "Rohit"],
    },
    {
      title: "Lamp Lighting by Faculty",
      performers: [],
    },
    {
      title: "Facilitation by Flower Pot and Kushay’s Painting",
      performers: [],
    },
    {
      title: "Address of Dean, FOT",
      performers: [],
    },
    {
      title: "Spandan Website Launch",
      performers: [],
    },
    {
      title: "Prof. AK Tandon – Instrumental",
      performers: [],
    },
    {
      title: "Performances",
      items: [
        { performer: "Kush Mittal", type: "Instrumental (Hymns)" },
        { performer: "Jhanvi Nagori (Duo)", type: "Dance" },
        { performer: "Adhish Chatterjee", type: "Music" },
        { performer: "Akanksha and Group", type: "Dance" },
        { performer: "Tamanna Sharma", type: "Keyboard Instrumental" },
        { performer: "Gouri Dahiya", type: "Dance" },
        { performer: "Mo Hamza", type: "Poetry" },
        { performer: "Kushi", type: "Dance" },
        { performer: "Debojyoti", type: "Solo Music" },
        { performer: "Sneha Group", type: "Dance" },
        { performer: "Kanishk Mishra and Group", type: "Music" },
        { performer: "Yash Ahlawat and Group", type: "Dance" },
        { performer: "Tanisha Bageshwari", type: "Music" },
        { performer: "Group Kashika", type: "Dance" },
        { performer: "Hriddhi", type: "Music" },
        { performer: "Yashika Duo", type: "Dance" },
        { performer: "Rohit Kumar", type: "Music" },
        { performer: "Amartya and Group", type: "Musical Duo" },
        { performer: "Shikha", type: "Dance" },
        { performer: "Hirak", type: "Dance" },
        { performer: "Ayush Chauhan Group", type: "Music" },
        { performer: "Group Ruhaan", type: "Dance" },
        { performer: "Anmol Sao", type: "Instrumental" },
        { performer: "Duo Manya", type: "Dance" },
        { performer: "Vishal Sonkar", type: "Solo Music" },
        { performer: "Group Minaz Hussain", type: "Dance" },
        { performer: "Group Unnati", type: "Dance" },
      ],
    },
    {
      title: "Vote of Thanks by Vanita Ma’am",
      performers: [],
    },
    {
      title: "Thanks Address by Student Organizers",
      performers: [],
    },
    {
      title: "Behind the Scenes",
      performers: [],
    },
  ];

  let count = 1;
  return (
    <div className="main">
      <a href='/' className='fixed z-50 text-white scale-200 m-6'>
        <FaArrowLeft />
      </a>
      <div id='timeline'>
        <div className="event-schedule grid gap-4 font-serif mb-10">
          <h1 id='head'>Spandan Event Schedule</h1>
          {eventSchedule.map((section, index) => (
            <div key={index} className="event-section grid gap-2 mb-2">
              <h2 id='subhead'>{section.title}</h2>
              {section.duration && <p>~ Duration: {section.duration}</p>}
              {section.performers && section.performers.length > 0 && (
                <ul>
                  {section.performers.map((performer, i) => (
                    <li key={i}>~ {performer}</li>
                  ))}
                </ul>
              )}
              {section.items && (
                <ol start={count}>
                  {section.items.map((item, i) => {
                    count++;
                    return (
                      <li className='grid grid-cols-2' key={i}>
                         <strong>{count-1} . {item.performer}</strong> - {item.type}
                      </li>
                    );
                  })}
                </ol>
              )}
            </div>
          ))}
        </div>
      </div>
    </div>
  );
}

export default Events;
