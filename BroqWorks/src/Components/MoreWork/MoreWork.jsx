import React, { useEffect } from 'react';
import '../MoreWork/MoreWork.css';
import { useNavigate } from 'react-router-dom';
import theme_pattern from '../../assets/theme_pattern.svg';
import mywork_data from '../../assets/mywork_data';
import Slider from 'react-slick';

const MoreWork = () => {
  useEffect(() => {
    window.scrollTo(0, 0);
  }, []);

  const navigate = useNavigate();

  const handleWorkClick = (work) => {
    navigate('/MyWorkData', { state: { work } });
  };

  const remainingCategories = mywork_data.slice(2); // Show categories after the first 2

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
    <div className='more-work'>
      <div className="title-box">
        <h1>More Work</h1>
        <img src={theme_pattern} alt="" />
      </div>
      {remainingCategories.map((category, index) => (
        <div key={index} className="work-category">
          <h2 className='work-category-title'>{category.category}</h2>
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
    </div>
  );
};

export default MoreWork;
