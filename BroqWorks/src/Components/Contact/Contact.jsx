import React, { useState } from 'react';
import DatePicker from 'react-datepicker';
import 'react-datepicker/dist/react-datepicker.css'; // Import default styles
import './Contact.css';
import theme_pattern from '../../assets/theme_pattern.svg';
import mail_icon from '../../assets/mail_icon.svg';
import location_icon from '../../assets/location_icon.svg';
import call_icon from '../../assets/call_icon.svg';

import "slick-carousel/slick/slick.css";
import "slick-carousel/slick/slick-theme.css";
import Slider from 'react-slick';

const Contact = () => {

  // appoitment - 
// State to track current month and year
const [currentMonth, setCurrentMonth] = useState(new Date().getMonth());
const [currentYear, setCurrentYear] = useState(new Date().getFullYear());
const [selectedDate, setSelectedDate] = useState(null);
const [selectedTime, setSelectedTime] = useState(null);

const generateDaysInMonth = () => {
  const daysInMonth = new Date(currentYear, currentMonth + 1, 0).getDate();
  const daysArray = [];
  for (let i = 1; i <= daysInMonth; i++) {
    const date = new Date(currentYear, currentMonth, i);
    const isPastDate = date < new Date().setHours(0, 0, 0, 0);
    daysArray.push(
      <div
        key={i}
        className={`date-item ${selectedDate === i ? "selected" : ""}`}
        onClick={() => !isPastDate && setSelectedDate(i)}
        style={{ pointerEvents: isPastDate ? "none" : "auto", opacity: isPastDate ? 0.5 : 1 }}
      >
        {i}
      </div>
    );
  }
  return daysArray;
};

const handleSwipeLeft = () => {
  if (currentMonth === 11) {
    setCurrentMonth(0);
    setCurrentYear(currentYear + 1);
  } else {
    setCurrentMonth(currentMonth + 1);
  }
};

const handleSwipeRight = () => {
  if (currentMonth === 0) {
    setCurrentMonth(11);
    setCurrentYear(currentYear - 1);
  } else {
    setCurrentMonth(currentMonth - 1);
  }
};

// appointment finished
  const [date, setDate] = useState(new Date());
  const [time, setTime] = useState('');
  const [showOptions, setShowOptions] = useState(false);

  const handleTimeChange = (e) => {
    setTime(e.target.dataset.time);
    setShowOptions(false);
  };

  const toggleOptions = () => {
    setShowOptions(prev => !prev);
  };

  const times = [];
  for (let h = 9; h <= 18; h++) {
    const hours = h % 12 || 12;
    const ampm = h >= 12 ? 'PM' : 'AM';
    times.push(`${hours}:00${ampm}`);
  }
  // web3forms api embeed
  const onSubmit = async (event) => {
    event.preventDefault();

    // Check if the form is being submitted
    if (event.target.classList.contains('contact-submit')) {
        const formData = new FormData(event.target);
        formData.append("access_key", "996f65d6-5b72-4720-b68b-4c832bf14d95");
        formData.append("selectedDate", selectedDate ? selectedDate : '');
        formData.append("selectedTime", selectedTime ? selectedTime : '');

        const object = Object.fromEntries(formData);
        const json = JSON.stringify(object);

        try {
            const res = await fetch("https://api.web3forms.com/submit", {
                method: "POST",
                headers: {
                    "Content-Type": "application/json",
                    Accept: "application/json"
                },
                body: json
            }).then((res) => res.json());

            console.log('API Response:', res); // Log the API response
            alert(res.message);
        } catch (error) {
            console.error('Error:', error); // Log any errors
            alert('There was a problem submitting your request. Please try again.');
        }
    }
};

  return (
    <div id='contact' className='contact'>
      <div className="title-box">
        <h1>Get in touch</h1>
        <img src={theme_pattern} alt="" />
      </div>
      <div className="contact-section">
        <div className="contact-left">
          <h1>Let's talk</h1>
          <p>We are currently available to take on new projects, so feel free to send us a message about anything that you want us to work on. You can contact us anytime.</p>
          <div className="contact-details">
            <div className="contact-detail">
              <a href="mailto:nihal@broqworks.com"><img src={mail_icon} alt="" /><p>nihal@broqworks.com</p></a>
            </div>
            <div className="contact-detail">
              <a href="tel:6264998754"><img src={call_icon} alt="" /><p>+91-6264-998-754</p></a>
            </div>
            <div className="contact-detail">
              <a href="https://maps.app.goo.gl/C6UEeGvLNMZvmbtd9"><img src={location_icon} alt="" /><p>Delhi,IN</p></a>
            </div>
          </div>
        </div>

        {/* form to get details */}
        <form onSubmit={onSubmit} className="contact-right">
          {/* mobile number */}
          <label htmlFor="mobile">Your Mobile</label>
          <input type="tel" placeholder="Enter your mobile number" name="mobile" pattern="[0-9]{10}" required />


          {/* time-new */}
          <label htmlFor="time"></label>
          <div className="month">
          <div className="month-name">
            {new Date(currentYear, currentMonth).toLocaleString("default", { month: "long" })}
            </div>
          <div className="swipe_buttons">
            <button onClick={handleSwipeRight} className="swipe-button-left">←</button>
            <button onClick={handleSwipeLeft} className="swipe-button-right">→</button>
          </div>
          </div>

          <div className="date-picker">
            
            <div className="date-grid">
              {generateDaysInMonth()}
            </div>
          </div>

          <div className="time-picker">
            <div className="time-grid">
              {["11:00 AM", "12:00 PM", "01:00 PM", "02:00 PM", "03:00 PM", "04:00 PM", "05:00 PM", "06:00 PM", "07:00 PM", "08:00 PM", "09:00 PM", "10:00 PM"].map((time) => (
                <div
                  key={time}
                  className={`time-item ${selectedTime === time ? "selected" : ""}`}
                  onClick={() => setSelectedTime(time)}
                >
                  {time}
                </div>
              ))}
            </div>
          </div>

          <label htmlFor="name">Your Name (Optional)</label>
          <input type="text" placeholder='Enter your name' name='name' />

          <button type='submit' className="contact-submit">Book Appointment</button>
        </form>
      </div>
    </div>
  );
};

export default Contact;