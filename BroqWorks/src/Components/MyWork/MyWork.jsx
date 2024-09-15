import React from 'react';
import './MyWork.css';
import theme_pattern from '../../assets/theme_pattern.svg';
import mywork_data from '../../assets/mywork_data';
import arrow_icon from '../../assets/arrow_icon.svg';
import { useNavigate } from 'react-router-dom';

import "slick-carousel/slick/slick.css";
import "slick-carousel/slick/slick-theme.css";
import Slider from "react-slick";

const MyWork = () => {
  const navigate = useNavigate();

  const handleWorkClick = (work) => {
    navigate('/MyWorkData', { state: { work } });
  };
  
  const handleMoreWork = () => {
    navigate('/MoreWork');
  };

  const displayedCategories = mywork_data.slice(0, 2); // Show only first 2 categories

  var settings = {
    infinite: false,
    speed: 500,
    slidesToShow: 3,
    slidesToScroll: 3,
    initialSlide: 0,
    responsive: [
      {
        breakpoint: 1024,
        settings: {
          slidesToShow: 2,
          slidesToScroll: 2,
          infinite: true,
        }
      },
      {
        breakpoint: 600,
        settings: {
          slidesToShow: 1,
          slidesToScroll: 1,
          initialSlide: 1
        }
      }
    ]
  };

  return (
    <div id='work' className='mywork'>
      <div className="title-box">
        <h1>Our Latest Work</h1>
        <img src={theme_pattern} alt="" />
      </div>
      {displayedCategories.map((category, index) => (
        <div key={index} className="work-category">
          <h2 className="work-category-title">{category.category}</h2>
          <Slider {...settings}>
            {category.works.map((work, workIndex) => (
              <div key={workIndex} className="work-item">
                <img
                  src={work.w_img}
                  alt={work.w_name}
                  onClick={() => handleWorkClick(work)}
                  className="work-image"
                  />
            </div>
            ))}
          </Slider>
        </div>
      ))}
      <div className="mywork-showmore" onClick={handleMoreWork}>
        <p>Show More</p>
        <img src={arrow_icon} alt="" />
      </div>
    </div>
  );
};

export default MyWork;
